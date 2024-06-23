// В C++ регулярные выражения реализуются как часть библиотеки STL (Standard Template
// Library), и для работы с регулярными выражениями требуется использование класса regex и
// связанных с ним функций и методов.
#include <regex>
#include "pt4.h"
using namespace std;

void Solve()
{
    Task("Reg5ZLen5");
    string str = "";
    GetS(str);
    regex pattern(R"(\bhello\b)");
    sregex_iterator begin(str.begin(), str.end(), pattern);
    sregex_iterator end;
    int count = distance(begin, end);
    PutN(count);
}
