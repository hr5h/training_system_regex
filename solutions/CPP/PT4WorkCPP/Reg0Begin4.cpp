// В C++ стандартная библиотека regex предоставляет набор классов и функций для
// работы с регулярными выражениями.
#include <regex>
#include "pt4.h"
using namespace std;

void Solve()
{
    setlocale(LC_ALL, "");
    Task("Reg0Begin4");
    string str = "";
    GetS(str);
    string res = str;
    regex pattern(R"(\d+)");
    string replacement = "число";
    res = regex_replace(res, pattern, replacement);
    PutS(res);
}
