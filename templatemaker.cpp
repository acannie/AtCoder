#include <bits/stdc++.h>
#include <experimental/filesystem>
namespace fs = std::experimental::filesystem;

int main(int const argc, const char* const argv[], char* envv[])
{
    std::string contest_type_name;
    std::string contest_name;
    int number_of_tasks;

    /* コンテストの種類名読み込み */
    std::cout << "Input the contest type name. " << std::endl;
    std::cout << "If you don't want to crete contest type directory, input n --> ";
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

    fs::path template_path = fs::absolute(path).append("template.cpp");

    /* template.cppの中身をそのまま変数 templ に読み込む */
    std::ifstream ifs(template_path);
    if (ifs.fail())
    {
        std::cerr << "失敗" << std::endl;
        return -1;
    }
    std::string templ((std::istreambuf_iterator<char>(ifs)),
                      std::istreambuf_iterator<char>());

    /* cppファイル生成 */
    for (int i = 0; i < number_of_tasks; i++)
    {
        std::string task_name = std::string() + (char)('a' + i);

        fs::path directory_path = fs::absolute(path);
        // std::string directory_name;
        // std::string filename;
        if (contest_type_name != "n")
        {
            //directory_name += contest_type_name + "/";
            directory_path = directory_path.append(contest_type_name);
        }
        // directory_name += contest_name;
        directory_path = directory_path.append(contest_name);
        //fs::create_directories(directory_name);
        fs::create_directories(directory_path);

        /* crete filename value as "./${directory=name}(if exists)/${contest_name}/${task_name from index}.cpp" */
        fs::path file_path = directory_path.append(task_name + ".cpp");
        //filename = "./" + directory_name + "/" + task_name + ".cpp";
        // std::cout << filename << std::endl;
        std::cout << file_path << std::endl;

        std::ofstream ofs(file_path);
        if (!ofs)
        {
            std::cout << "ファイルが開けませんでした。" << std::endl;
            return 0;
        }

        ofs << templ << std::endl;

        ofs.close();
    }

    std::cout << "Done! :)" << std::endl;

    return 0;
}