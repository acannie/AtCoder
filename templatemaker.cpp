#include <bits/stdc++.h>
#include <experimental/filesystem>
using namespace std;

std::string TEMPLATE = 
R"(#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    string S;

    cin >> N;
    
    int a[N];
     
    for(int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
      
    int ans;
      
    cout << ans << endl;
      
    return 0;
}
)";

int main()
{
    string contest_type_name;
    string contest_name;
    int number_of_tasks;

    /* コンテストの種類名読み込み */
    cout << "Input the contest type name. " << endl;
    cout << "If you don't want to crete contest type directory, input n --> ";
    cin >> contest_type_name;

    /* コンテスト名読み込み */
    cout << "Input the contest name --> ";
    cin >> contest_name;

    /* 問題数読み込み */
    cout << "How many tasks in the contest? --> ";
    cin >> number_of_tasks;

    cout << "Start to create files" << std::endl;

    /* cppファイル生成 */
    for (int i = 0; i < number_of_tasks; i++)
    {
        string task_name = string() + (char)('a' + i);

        string directory_name;
        string filename;
        if (contest_type_name != "n")
        {
            directory_name += contest_type_name + "/";
        }
        directory_name += contest_name;
        std::experimental::filesystem::create_directories(directory_name);

        /* crete filename value as "./${directory=name}(if exists)/${contest_name}/${task_name from index}.cpp" */
        filename = "./" + directory_name + "/" + task_name + ".cpp";
        std::cout << filename << std::endl;

        std::ofstream ofs(filename);
        if (!ofs)
        {
            std::cout << "ファイルが開けませんでした。" << std::endl;
            return 0;
        }

        ofs << TEMPLATE << std::endl;

        ofs.close();
    }

    std::cout << "Done! :)" << std::endl;

    return 0;
}