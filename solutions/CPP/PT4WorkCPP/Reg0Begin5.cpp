// В C++ стандартная библиотека regex предоставляет набор классов и функций для
// работы с регулярными выражениями.
#include <regex>
#include "pt4.h"
using namespace std;

void Solve()
{
    Task("Reg0Begin5");
    string str = "";
    GetS(str);
    regex pattern(R"(\d{2}\.\d{2}\.\d{4})");
    sregex_iterator begin(str.begin(), str.end(), pattern);
    sregex_iterator end;
    int count = 1;
    for (sregex_iterator it = begin; it != end; ++it) {
        smatch match = *it;
        PutS(match.str());
    }
}
