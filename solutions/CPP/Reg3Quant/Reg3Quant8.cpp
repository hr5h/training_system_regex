// В C++ регулярные выражения реализуются как часть библиотеки STL (Standard Template
// Library), и для работы с регулярными выражениями требуется использование класса regex и
// связанных с ним функций и методов.
#include <regex>
#include "pt4.h"
using namespace std;

void Solve()
{
    Task("Reg3Quant8");
    string str = "";
    GetS(str);
    string res = "";
    regex pattern(R"(\s{3,})");
    string replacement = " ";
    res = regex_replace(str, pattern, replacement);
    PutS(res);
}
