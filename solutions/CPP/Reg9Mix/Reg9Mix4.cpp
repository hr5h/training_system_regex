// В C++ регулярные выражения реализуются как часть библиотеки STL (Standard Template
// Library), и для работы с регулярными выражениями требуется использование класса regex и
// связанных с ним функций и методов.
#include <regex>
#include "pt4.h"
using namespace std;

void Solve()
{
    Task("Reg9Mix4");
    string str = "";
    GetS(str);
    regex pattern(R"([АВЕКМНОРСТХУ]\d\d\d[АВЕКМНОРСТХУ]{2})");
    sregex_iterator begin(str.begin(), str.end(), pattern);
    sregex_iterator end;
    int count = 1;
    for (sregex_iterator it = begin; it != end; ++it) {
        smatch match = *it;
        PutS(match.str());
    }
}
