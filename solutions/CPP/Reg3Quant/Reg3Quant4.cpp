// В C++ регулярные выражения реализуются как часть библиотеки STL (Standard Template
// Library), и для работы с регулярными выражениями требуется использование класса regex и
// связанных с ним функций и методов.
#include <regex>
#include "pt4.h"
using namespace std;

void Solve()
{
    Task("Reg3Quant4");
    string str = "";
    GetS(str);
    regex pattern(R"(\d+[lL])");
    smatch match;
    auto it = sregex_iterator(str.begin(), str.end(), pattern);
    auto end = sregex_iterator();
    int count = 1;
    for (; it != end; ++it) {
        smatch match = *it;
        int start = static_cast<int>(match.position());
        int end = start + static_cast<int>(match.length());
        PutN(start);
    }
}
