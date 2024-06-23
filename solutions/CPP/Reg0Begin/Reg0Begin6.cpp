// В C++ стандартная библиотека regex предоставляет набор классов и функций для
// работы с регулярными выражениями.
#include <regex>
#include "pt4.h"
using namespace std;

void Solve()
{
    Task("Reg0Begin6");
    string str = "";
    GetS(str);
    regex pattern(R"(\s)");
    string replacement = "_";
    string res = regex_replace(str, pattern, replacement);
    PutS(res.c_str());
}
