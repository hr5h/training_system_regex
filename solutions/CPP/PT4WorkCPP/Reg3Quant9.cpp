// В C++ регулярные выражения реализуются как часть библиотеки STL (Standard Template
// Library), и для работы с регулярными выражениями требуется использование класса regex и
// связанных с ним функций и методов.
#include <regex>
#include "pt4.h"
using namespace std;

void Solve()
{
    Task("Reg3Quant9");
    string str = "";
    GetS(str);
    regex pattern(R"(\b__?_?\b)");
    bool res = regex_search(str, pattern);
    PutB(res);
}
