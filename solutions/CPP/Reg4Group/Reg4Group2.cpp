// В C++ регулярные выражения реализуются как часть библиотеки STL (Standard Template
// Library), и для работы с регулярными выражениями требуется использование класса regex и
// связанных с ним функций и методов.
#include <regex>
#include "pt4.h"
using namespace std;

void Solve()
{
    Task("Reg4Group2");
    string str = "";
    GetS(str);
    regex pattern(R"((\+7\d{10})\s([A-Z|А-Я|a-z|а-я]+))"); // Регулярное выражение для поиска номеров и имен
    sregex_iterator it(str.begin(), str.end(), pattern);
    sregex_iterator end;
    int count = 1;
    while (it != end) {
        smatch match = *it;
        string res = "Tel: " + match[1].str() + " Name: " + match[2].str();
        PutS(res);
        ++it;
    }
}
