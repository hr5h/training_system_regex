// В C++ регулярные выражения реализуются как часть библиотеки STL (Standard Template
// Library), и для работы с регулярными выражениями требуется использование класса regex и
// связанных с ним функций и методов.
#include <regex>
#include "pt4.h"
using namespace std;

void Solve()
{
    Task("Reg2Esc2");
    string str = "";
    GetS(str);
    string res = str;
    regex pattern(R"(\\)");
    string replacement = "/";
    res = regex_replace(res, pattern, replacement);
    PutS(res);
}
