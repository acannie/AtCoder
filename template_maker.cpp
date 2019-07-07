#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <direct.h>
using namespace std;

void sentence(FILE *fi)
{
    fprintf
    (fi,"#include <iostream>\n
        #include <string>\n
        #include <algorithm>\n
        #include <cmath>\n
        using namespace std;\n
        \n
        int main()\n
        {\n
        \tint N;\n
        \t\n
        \tcin >> N;\n
        \t\n
        \tint a[N];\n
        \tstring S;\n
        \t\n
        \tfor(int i = 1; i <= N; i++)\n
        \t{\n
        \t\tcin >> a[i];\n
        \t}\n
        \t\n
        \tint ans;\n
        \t\n
        \tcout << ans << endl;\n
        \t\n
        \treturn 0;\n
        }\n");

    fclose(fi);
}

int main()
{
    string contest_name;
    char contest_abc;
    FILE *fi;
    char filename[30];

    /* コンテスト名読み込み */
    cout << "Input contest name --> ";
    cin >> contest_name;

    /* 問題数読み込み */
    cout << "What is the backmost alphabet? --> ";
    cin >> contest_abc;

    /* ディレクトリ生成 */
    if (_mkdir(contest_name.c_str()) == 0)
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
        sprintf(filename, "%s/%s%c.cpp", contest_name.c_str(), contest_name.c_str(), i);
        fi = fopen(filename, "w");

        if (fi == NULL)
        {
            fprintf(stderr, "error!\n");
            exit(1);
        }

        sentence(fi);
    }

    return 0;
}