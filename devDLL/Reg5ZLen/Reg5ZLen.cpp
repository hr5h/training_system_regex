#include <string>
#include "pt4taskmaker.h"
#include <regex>

void Task1()
{
    CreateTask();
    TaskText(
        "Ќайдите число, которое находитс€ в начале строки."
    );
    int a = RandomN(7, 10);
    string str = "";
    for (int i = 0; i < a; i++) {
        str += to_string(RandomN(0, 9999)) + (i + 1 != a ? " " : "");
    }
    DataS(str.c_str(), xCenter, 1);
    regex pattern(R"(^\d+)");
    sregex_iterator begin(str.begin(), str.end(), pattern);
    sregex_iterator end;
    ResultS("Number: ", (*begin++).str().c_str(), xCenter, 1);
    SetTestCount(6);
}

void Task2()
{
    CreateTask();
    TaskText(
        "Ќайдите число, которое находитс€ в конце строки."
    );
    int a = RandomN(7, 10);
    string str = "";
    for (int i = 0; i < a; i++) {
        str += to_string(RandomN(0, 9999)) + (i + 1 != a ? " " : "");
    }
    DataS(str.c_str(), xCenter, 1);
    regex pattern(R"(\d+$)");
    sregex_iterator begin(str.begin(), str.end(), pattern);
    sregex_iterator end;
    ResultS("Number: ", (*begin++).str().c_str(), xCenter, 1);
    SetTestCount(6);
}

void Task3()
{
  CreateTask();
  TaskText(
  "Ќайти первое и последнее слово в строке."
  );
  string arr[]{
        "The sun shone brightly in the clear sky, a perfect day for a picnic",
        "Laughter echoed through the park as children played on the swings",
        "Waves crashed against the rocks, creating a soothing, rhythmic melody",
        "The aroma of freshly baked cookies wafted through the air",
        "Autumn leaves rustled in the breeze painting the world in vibrant hues",
        "Snowflakes danced, transforming the landscape into a winter wonderland",
        "The old bookstore had a unique charm, with its worn spines and cozy corners",
        "Distant thunder rumbled, a prelude to the coming storm that loomed overhead",
        "Distant mountains stood tall, their peaks shrouded in a veil of mist",
        "The city skyline glittered at night, a testament to human ingenuity",
        "Birdsong filled the air, a harmonious symphony welcoming the dawn",
        "Flowers bloomed in the garden, their petals unfurling in a riot of color",
        "The library is hushed silence was broken only by the turning of pages",
        "Winding paths through the forest led to hidden glades, inviting exploration",
        "The sound of a crackling fireplace provided a cozy ambiance on a cold night",
        "The scent of freshly brewed coffee wafted through the cafe",
        "Distant lights twinkled on the horizon a promise of adventure and discovery",
        "The gentle lapping of waves against the shore was a soothing lullaby",
        "Majestic mountains stood as silent sentinels, their grandeur inspiring awe",
        "Soft piano music drifted through the room, creating a peaceful atmosphere",
        "The smell of salt and sea air filled the lungs, invigorating the senses",
        "Autumn leaves crunched underfoot, a symphony of the changing seasons",
        "Distant church bells rang out, marking the passing of time",
        "The roar of a waterfall thundered in the distance, a natural wonder",
        "The sound of children is laughter echoed through the neighborhood, a sound",
        "The scent of freshly mown grass filled the air, a sign of summer",
        "Distant stars twinkled in the inky night sky, a tapestry of wonder",
        "The sound of a crackling campfire provided a cozy ambiance in the woods",
        "Distant mountains stood tall, their peaks reaching for the heavens",
        "The sound of a lone owl is hoot pierced the silence of the night",
        "Distant city lights glittered on the horizon a testament to human ingenuity",
        "The gentle rustling of leaves in the breeze was a soothing symphony",
        "Distant thunder rumbled, a harbinger of the coming storm",
        "The sound of a babbling brook provided a calming backdrop in the forest",
        "Distant hills rolled gently, their slopes dotted with wildflowers",
        "The scent of freshly baked bread wafted through the air",
        "Distant stars twinkled in the vast expanse of the night sky",
        "The sound of a gentle rain patter on the roof was a soothing lullaby",
        "Distant mountains rose majestically, their peaks capped with snow",
        "The scent of freshly cut grass filled the air, a sign of summer",
        "Distant waves crashed against the shore, a rhythmic symphony of nature",
        "The sound of a lone bird is song pierced the silence of the morning",
        "Distant city lights glittered on the horizon, a tapestry of human progress",
        "The sound of a breeze rustling through the trees was a soothing melody",
        "Distant thunderstorms rumbled, a reminder of the power of nature",
        "The scent of freshly brewed coffee wafted through the cafe",
        "Distant mountains stood tall, their peaks shrouded in a veil of mist",
        "The sound of a lone wolf is howl pierced the silence of the night"
  };
  int a = RandomN(0, 47);
  string str = arr[a];
  DataS(str.c_str(), xCenter, 1);
  regex pattern(R"(^[A-z]+|[a-z]+$)");
  sregex_iterator begin(str.begin(), str.end(), pattern);
  sregex_iterator end;
  ResultS("ѕервое слово в строке: ", (*begin++).str().c_str(), xCenter, 1);
  ResultS("¬торое слово в строке: ", (*begin).str().c_str(), xCenter, 2);
  SetTestCount(5);
}

void Task4()
{
    CreateTask();
    TaskText(
        "ѕредположим, мы пишем подсветку синтаксиса и хотим выделить слово var,\n"
        "но только тогда, когда оно по€вл€етс€ само по себе\n"
        "(не каса€сь других символов слова). Ќайдите все такие вхождени€ слова var\n"
        "в строке и выведите их количество в строке."
    );
    string arr[]{
        "var", "varx", "_var", "(var j)", "barvarcar", "*var", "var->", "{var}"
    };
    int a = RandomN(5, 9);
    int b = RandomN(1, a);
    string str = "";
    for (int i = 0; i < a; i++) {
        int r = RandomN(0, 7);
        str += ((i + 1 != b) ? arr[r] : "var") + (i + 1 != a ? " " : "");
    }
    DataS(str.c_str(), xCenter, 1);
    regex pattern(R"(\bvar\b)");
    sregex_iterator begin(str.begin(), str.end(), pattern);
    sregex_iterator end;
    int count = distance(begin, end);

    ResultN("Count = ", count, xCenter, 1, 3);
    SetTestCount(5);
}

void Task5()
{
    CreateTask();
    TaskText(
        "Ќапишите регул€рное выражение, которое находит все вхождени€ слова \"hello\"\n"
        "в тексте, но не находит вхождени€, если слово \"hello\" €вл€етс€ частью\n"
        "другого слова (например, \"hello\" в \"hello_world\" не должно быть найдено)\n"
        "и выведите их количество в строке."
    );
    string arr[]{
        "hell", "hellox", "_hello", "hello", "helloworld", "*hello", "hello->", "{hello}", "world", "hello_world"
    };
    int a = RandomN(5, 8);
    int b = RandomN(1, a);
    string str = "";
    for (int i = 0; i < a; i++) {
        int r = RandomN(0, 9);
        str += ((i + 1 != b) ? arr[r] : "hello") + (i + 1 != a ? " " : "");
    }
    DataS(str.c_str(), xCenter, 1);
    regex pattern(R"(\bhello\b)");
    sregex_iterator begin(str.begin(), str.end(), pattern);
    sregex_iterator end;
    int count = distance(begin, end);

    ResultN("Count = ", count, xCenter, 1, 3);
    SetTestCount(5);
}

void _stdcall InitTask(int num)
{
  switch (num)  
  {
    case 1:
        Task1(); break;
    case 2:
        Task2(); break;
    case 3:
        Task3(); break;
    case 4:
        Task4(); break;
    case 5:
        Task5(); break;
  }
}

void _stdcall inittaskgroup()
{
  CreateGroup("Reg5ZLen", "–егул€рные выражени€:  оманды нулевой длины",
    "", "qwqfsdf13dfttd", 5, InitTask);
}
