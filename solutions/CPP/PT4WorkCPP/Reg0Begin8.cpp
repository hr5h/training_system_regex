// В C++ стандартная библиотека regex предоставляет набор классов и функций для
// работы с регулярными выражениями.
#include <regex>
#include "pt4.h"
using namespace std;

void Solve()
{
    Task("Reg0Begin8");
    string str = "";
    GetS(str);
    regex pattern(R"(\s+)");
    bool res = regex_search(str, pattern);
    PutB(res);
}
