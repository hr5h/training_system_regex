// В C++ регулярные выражения реализуются как часть библиотеки STL (Standard Template
// Library), и для работы с регулярными выражениями требуется использование класса regex и
// связанных с ним функций и методов.
#include <regex>
#include "pt4.h"
using namespace std;

void Solve()
{
    Task("Reg9Mix8");
    string str = "";
    GetS(str);
    regex pattern(R"((?:(?:сегодня|завтра|вчера|Сегодня|Завтра|Вчера)|\d{1,2}(?:\s+)?(?:января|февраля|марта|апреля|мая|июня|июля|августа|сентября|октября|ноября|декабря)(?:\s+)?(?:\d{4})?(?:\s+)?(?:года|год)?))", regex_constants::icase);
    sregex_iterator begin(str.begin(), str.end(), pattern);
    sregex_iterator end;
    int count = 1;
    for (sregex_iterator it = begin; it != end; ++it) {
        smatch match = *it;
        PutS(match.str());
    }
}
