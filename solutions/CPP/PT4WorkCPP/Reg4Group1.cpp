// В C++ регулярные выражения реализуются как часть библиотеки STL (Standard Template
// Library), и для работы с регулярными выражениями требуется использование класса regex и
// связанных с ним функций и методов.
#include <regex>
#include "pt4.h"
using namespace std;

void Solve()
{
    Task("Reg4Group1");
    string str = "";
    GetS(str);
    regex pattern(R"(([A-Z][a-z]*)|([a-z]+))");
    sregex_iterator it(str.begin(), str.end(), pattern);
    sregex_iterator end;
    int count1 = 0;
    int count2 = 0;
    while (it != end) {
        smatch match = *it;
        if (match[1].matched) count1++;
        if (match[2].matched) count2++;
        ++it;
    }
    PutN(count1);
    PutN(count2);
}
