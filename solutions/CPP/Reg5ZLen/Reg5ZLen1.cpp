// В C++ регулярные выражения реализуются как часть библиотеки STL (Standard Template
// Library), и для работы с регулярными выражениями требуется использование класса regex и
// связанных с ним функций и методов.
#include <regex>
#include "pt4.h"
using namespace std;

void Solve()
{
    Task("Reg5ZLen1");
    string str = "";
    GetS(str);
    regex pattern(R"(^\d+)");
    sregex_iterator begin(str.begin(), str.end(), pattern);
    sregex_iterator end;
    PutS((*begin++).str());
}
