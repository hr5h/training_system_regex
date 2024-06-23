// В C++ регулярные выражения реализуются как часть библиотеки STL (Standard Template
// Library), и для работы с регулярными выражениями требуется использование класса regex и
// связанных с ним функций и методов.
#include <regex>
#include "pt4.h"
using namespace std;

void Solve()
{
    Task("Reg1Sym5");
    string str = "";
    GetS(str);
    string res = str;
    regex pattern("19[78][^3-6]");
    string replacement = "2024";
    res = regex_replace(res, pattern, replacement);
    PutS(res);
}
