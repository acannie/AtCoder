#include <bits/stdc++.h>
#include <experimental/filesystem>
namespace fs = std::experimental::filesystem;

std::string read_file(fs::path template_path)
{
    /* template_tst.cppの中身をそのまま変数 templ に読み込む */
    std::ifstream ifs(template_path);
    if (ifs.fail())
    {
        std::cerr << "失敗" << std::endl;
        return nullptr;
    }
    std::string templ((std::istreambuf_iterator<char>(ifs)),
                      std::istreambuf_iterator<char>());
    return templ;
}

fs::path get_relative_path(std::string src_type, std::string contest_type_name, std::string contest_name)
{
    fs::path relative_path = fs::path("");
    if (contest_type_name != "n")
    {
        if (!src_type.empty())
        {
            relative_path.append(src_type);
        }
        relative_path = relative_path.append(contest_type_name);
    }
    relative_path = relative_path.append(contest_name);
    return relative_path;
}

fs::path create_file_path(fs::path directory_path, std::string contest_name, std::string task_name, std::string file_suffix)
{
    /* crete filename value as "./${directory=name}(if exists)/${contest_name}/${contest_name}{task_name from index}${file_suffix}.cpp" */
    fs::path file_path = directory_path.append(contest_name + task_name + file_suffix + ".cpp");

    return file_path;
}

int create_file(std::string src_type, std::string templ, std::string task_name, fs::path path,
                std::string contest_type_name, std::string contest_name, std::string file_suffix)
{
    /* cppファイル生成 */
    fs::path relative_path = get_relative_path(src_type, contest_type_name, contest_name);
    fs::path directory_path = fs::absolute(path).append(relative_path.generic_string());
    fs::create_directories(directory_path);

    /* crete filename value as "./${directory=name}(if exists)/${contest_name}/${contest_name}{task_name from index}${file_suffix}.cpp" */
    fs::path file_path = create_file_path(directory_path, contest_name, task_name, file_suffix);
    std::cout << file_path << std::endl;

    std::ofstream ofs(file_path);
    if (!ofs)
    {
        std::cout << "ファイルが開けませんでした。" << std::endl;
        return -1;
    }

    ofs << templ << std::endl;

    ofs.close();

    return 0;
}

int main(int const argc, const char *const argv[], char *envv[])
{
    std::string contest_type_name;
    std::string contest_name;
    int number_of_tasks;

    /* コンテストの種類名読み込み */
    std::cout << "Input the contest type name. " << std::endl;
    std::cout << "If you don't want to create contest type directory, input n --> ";
    std::cin >> contest_type_name;

    /* コンテスト名読み込み */
    std::cout << "Input the contest name --> ";
    std::cin >> contest_name;

    /* 問題数読み込み */
    std::cout << "How many tasks in the contest? --> ";
    std::cin >> number_of_tasks;

    std::cout << "Start to create files" << std::endl;

    fs::path path = argv[0];
    path = fs::canonical(fs::absolute(path)).remove_filename();

    // If built with cmake, move parent from "build" directory
#ifdef CMAKE_BUILD
    path = path.parent_path();
#endif

    fs::path src_template_path = fs::absolute(path).append("template.cpp");

    std::string src_templ = read_file(src_template_path);

    for (int i = 0; i < number_of_tasks; i++)
    {
        std::string task_name = std::string() + (char)('a' + i);
        int res = 0;
        if ((res = create_file("src", src_templ, task_name, path, contest_type_name, contest_name, "")) != 0)
        {
            return res;
        }
    }

    fs::path tst_template_path = fs::absolute(path).append("template_tst.cpp");
    std::string tst_templ = read_file(tst_template_path);
    for (int i = 0; i < number_of_tasks; i++)
    {
        std::string task_name = std::string() + (char)('a' + i);

        int res = 0;
        if ((res = create_file("tst", tst_templ, task_name, path, contest_type_name, contest_name, "_tst")) != 0)
        {
            return res;
        }
    }

    /*--------- contest ----------*/
    // std::string contest_file_name = "contest";

    // int res = 0;
    // if ((res = create_file("tst", tst_templ, task_name, path, contest_type_name, contest_name, "_tst")) != 0)
    // {
    //     return res;
    // }

    std::cout << "Done! :)" << std::endl;

    return 0;
}