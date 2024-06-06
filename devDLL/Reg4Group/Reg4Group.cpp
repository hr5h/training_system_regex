#include <string>
#include "pt4taskmaker.h"
#include <regex>
#include <random>
#include <cctype>

void Task1()
{
    CreateTask();
    TaskText(
        "Поместить в первую группу слова, начинающиеся с заглавной буквы,\n"
        "а во вторую со строчной и вывести их количество в строке."
    );
    string arr[]{
        "The Sun Shone brightly In The Clear sky, a Perfect day for A picnic.",
        "Laughter Echoed through The Park As children Played on the swings.",
        "Waves Crashed against the Rocks, Creating a Soothing, Rhythmic melody.",
        "the Aroma of freshly Baked cookies Wafted Through The Air.",
        "autumn leaves Rustled In the breeze painting The world In vibrant hues.",
        "Snowflakes Danced, transforming the landscape into A winter Wonderland.",
        "The old Bookstore had A unique charm, With Its Worn Spines and Cozy corners.",
        "distant thunder Rumbled, A Prelude To The Coming Storm that Loomed overhead.",
        "distant Mountains stood Tall, their Peaks Shrouded In a veil Of mist.",
        "The city Skyline Glittered at night, a Testament to Human ingenuity.",
        "birdsong Filled the air, A harmonious symphony welcoming The Dawn.",
        "Flowers Bloomed in The Garden, their petals Unfurling In A Riot Of color.",
        "the library Is Hushed silence Was Broken Only by The Turning of pages.",
        "Winding Paths through the Forest led To Hidden Glades, inviting exploration.",
        "the sound Of a crackling fireplace Provided A cozy ambiance on A Cold Night.",
        "the Scent Of Freshly brewed Coffee Wafted through The Cafe.",
        "distant lights Twinkled On the Horizon a promise of adventure and Discovery.",
        "The Gentle Lapping of Waves Against The Shore Was a soothing lullaby.",
        "Majestic Mountains stood as Silent sentinels, Their Grandeur Inspiring awe.",
        "Soft Piano Music drifted through The room, creating A Peaceful Atmosphere.",
        "the Smell Of salt and sea air filled The Lungs, invigorating the senses.",
        "Autumn Leaves Crunched underfoot, A Symphony Of the changing Seasons.",
        "Distant Church bells Rang out, marking The passing Of Time.",
        "The Roar of a waterfall thundered in The Distance, a natural Wonder.",
        "The Sound of Children Is laughter Echoed Through the Neighborhood, a Sound.",
        "the scent Of freshly Mown grass Filled The Air, A Sign of Summer.",
        "distant Stars twinkled In the Inky Night Sky, a Tapestry Of wonder.",
        "The sound Of A Crackling campfire provided A cozy ambiance In the Woods.",
        "Distant mountains stood Tall, their peaks Reaching for the Heavens.",
        "the Sound of a Lone owl is hoot Pierced the silence of The night.",
        "Distant City lights Glittered On the horizon a Testament To human ingenuity.",
        "The Gentle Rustling Of Leaves in The Breeze was a Soothing Symphony.",
        "distant Thunder Rumbled, a Harbinger of The Coming Storm.",
        "The Sound Of A babbling Brook Provided a Calming Backdrop in the Forest.",
        "distant hills rolled gently, Their slopes dotted with wildflowers.",
        "The Scent of freshly Baked Bread wafted Through The air.",
        "distant Stars twinkled in the Vast expanse of The night Sky.",
        "the sound Of A gentle Rain Patter On The roof was A Soothing lullaby.",
        "Distant Mountains rose Majestically, their peaks capped with snow.",
        "The Scent of freshly cut grass filled The Air, A Sign of Summer.",
        "Distant Waves crashed Against the Shore, a Rhythmic Symphony of nature.",
        "the sound of a Lone Bird is song pierced the silence Of the morning.",
        "Distant city lights Glittered On The Horizon, A tapestry Of human progress.",
        "the Sound of a breeze Rustling Through The Trees Was a Soothing Melody.",
        "Distant thunderstorms rumbled, a reminder Of The power of Nature.",
        "the Scent Of freshly brewed coffee wafted through the cafe.",
        "distant mountains Stood Tall, Their Peaks shrouded In a Veil Of Mist.",
        "The Sound of A Lone Wolf Is howl pierced the Silence of The Night."
    };
    int a = RandomN(0, 47);
    string str = arr[a];
    DataS(str.c_str(), xCenter, 1);

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
    ResultN("Количество слов с заглавной буквы:", count1, xCenter, 1, 2);
    ResultN("Количество слов со строчной буквы:", count2, xCenter, 2, 2);
    SetTestCount(5);
}

void Task2()
{
    CreateTask();
    TaskText(
        "Входная строка содержит в себе сотовый телефон в формате +7XXXXXXXXXX и Имя.\n"
        "Нужно выделить из строки все сгруппированные контакты с тегами\n"
        "<tel> - номер телефона, <name> - Имя и выведите их в правильном формате."
    );
    string str = "+79173256465 Алексей, +79256477392 Иван, +79023747551 Кирилл";
    DataS(str.c_str(), xCenter, 1);

    regex pattern(R"((\+7\d{10})\s([A-Z|А-Я|a-z|а-я]+))"); // Регулярное выражение для поиска номеров и имен
    sregex_iterator it(str.begin(), str.end(), pattern);
    sregex_iterator end;
    int count = 1;
    while (it != end) {
        smatch match = *it;
        string res = "Tel: " + match[1].str() + " Name: " + match[2].str();
        ResultS(res.c_str(), xCenter, count++);
        ++it;
    }
    SetTestCount(5);
}

void Task3()
{
    setlocale(0, LC_ALL);
    CreateTask();
    TaskText(
        "Заменить все слова, которые содержат 2 или более одинаковых\n"
        "букв подряд, на \"word\"."
    );
    string arr[] = {
        "aardvark", "bookkeeper", "carriage", "committee", "cooing",
        "deedee", "effervescent", "flutter", "glimmer", "gorilla",
        "hooray", "illustrious", "journey", "kookaburra", "llama",
        "mammal", "noon", "oozing", "parallel", "pepper",
        "quack", "rabbit", "sassafras", "shuffle", "silly",
        "tummy", "umbrella", "vacuum", "waddle", "whistle",
        "xx", "yay", "zebra", "banana", "coconut",
        "dinner", "elephant", "feather", "grasshopper", "hammer",
        "icecream", "jelly", "kitten", "letter", "mirror",
        "notebook", "octopus", "pillow", "quilt", "rain",
        "sunshine", "tree", "umbrella", "valley", "waterfall"
    };
    int a = RandomN(4, 6);
    string str = "";
    for (int i = 0; i < a; i++) {
        str += arr[RandomN(0, 54)] + (i + 1 != a ? " " : "");
    }
    regex pattern(R"(\w*(\w)\1{1,}\w*)");
    string replacement = "word";
    string res = regex_replace(str, pattern, replacement);
    DataS(str.c_str(), xCenter, 1);
    ResultS(res.c_str(), xCenter, 1);
    SetTestCount(9);
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
  }
}

void _stdcall inittaskgroup()
{
  CreateGroup("Reg4Group", "Регулярные выражения: Использование групп",
    "", "qwqfsdf13dfttd", 3, InitTask);
}
