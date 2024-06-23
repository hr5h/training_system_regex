// В C++ регулярные выражения реализуются как часть библиотеки STL (Standard Template
// Library), и для работы с регулярными выражениями требуется использование класса regex и
// связанных с ним функций и методов.
#include <regex>
#include "pt4.h"
using namespace std;

void Solve()
{
    Task("Reg4Group3");
    string str = "";
    GetS(str);
    regex pattern(R"(\w*(\w)\1{1,}\w*)");
    string replacement = "word";
    string res = regex_replace(str, pattern, replacement);
    PutS(res);
}
