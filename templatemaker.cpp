#include <bits/stdc++.h>
#include <sys/stat.h>
using namespace std;

void sentence(FILE *fi)
{
    fprintf(fi, "#include <bits/stdc++.h>\n");
    fprintf(fi, "using namespace std;\n");
    fprintf(fi, "\n");
    fprintf(fi, "int main()\n");
    fprintf(fi, "{\n");
    fprintf(fi, "\tint N;\n");
    fprintf(fi, "\tstring S;\n");
    fprintf(fi, "\n");
    fprintf(fi, "\tcin >> N;\n");
    fprintf(fi, "\t\n");
    fprintf(fi, "\tint a[N];\n");
    fprintf(fi, " \t\n");
    fprintf(fi, " \tfor(int i = 0; i < N; i++)\n");
    fprintf(fi, " \t{\n");
    fprintf(fi, " \t\tcin >> a[i];\n");
    fprintf(fi, " \t}\n");
    fprintf(fi, "  \t\n");
    fprintf(fi, "  \tint ans;\n");
    fprintf(fi, "  \t\n");
    fprintf(fi, "   \tcout << ans << endl;\n");
    fprintf(fi, "  \t\n");
    fprintf(fi, " \treturn 0;\n");
    fprintf(fi, " }\n");
    fclose(fi);
}

int main()
{
    string contest_name;
    char contest_abc;
    FILE *fi;
    char filename[100];
    string directory_name;

    /* ディレクトリ名読み込み */
    cout << "Input the directory name. " << endl;
    cout << "If nothing, input n --> ";
    cin >> directory_name;

    /* コンテスト名読み込み */
    cout << "Input the contest name --> ";
    cin >> contest_name;

    /* 問題数読み込み */
    cout << "What is the backmost alphabet? --> ";
    cin >> contest_abc;

    /* ディレクトリ生成 */
    if (mkdir(contest_name.c_str(), 0777) == 0)
    {
        printf("succeed to make dir.\n");
    }
    else
    {
        printf("failed to make dir.\n");
    }

    /* cppファイル生成 */

    for (char i = 'a'; i <= contest_abc; i++)
    {
        if (directory_name == "n")
        {
            sprintf(filename, "%s/%s%c.cpp", contest_name.c_str(), contest_name.c_str(), i);
            fi = fopen(filename, "w");
        }
        else
        {
            sprintf(filename, "%s/%s/%s%c.cpp", directory_name.c_str(), contest_name.c_str(), contest_name.c_str(), i);
            fi = fopen(filename, "w");
        }

        if (fi == NULL)
        {
            fprintf(stderr, "error!\n");
            exit(1);
        }

        sentence(fi);
    }

    return 0;
}