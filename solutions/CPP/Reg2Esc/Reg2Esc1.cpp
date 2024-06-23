// В C++ регулярные выражения реализуются как часть библиотеки STL (Standard Template
// Library), и для работы с регулярными выражениями требуется использование класса regex и
// связанных с ним функций и методов.
#include <regex>
#include "pt4.h"
using namespace std;

void Solve()
{
    Task("Reg2Esc1");
    string str = "";
    GetS(str);
    regex pattern(R"(\[\])");
    bool res = regex_search(str, pattern);
    PutB(res);
}
