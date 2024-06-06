#include <string>
#include "pt4taskmaker.h"
#include <regex>

void Task1()
{
    CreateTask();
    TaskText(
        "Напишите регулярное выражение, которое будет соответствовать\n"
        "любому числу, выведите эти числа."
    );
    int a = RandomN(5, 9);
    string str = "";
    for (int i = 0; i < a; i++) {
        str += to_string(RandomN(0, 999)) + (i + 1 != a ? " " : "");
    }
    DataS(str.c_str(), xCenter, 1);
    regex pattern(R"(\d+)");
    sregex_iterator begin(str.begin(), str.end(), pattern);
    sregex_iterator end;
    int count = 1;
    for (sregex_iterator it = begin; it != end; ++it) {
        smatch match = *it;
        ResultS(("Number " + to_string(count) + ": ").c_str(), match.str().c_str(), xCenter, count++);
    }
    SetTestCount(7);
}

void Task2()
{
    CreateTask();
    TaskText(
        "Напишите регулярное выражение, которое будет соответствовать\n"
        "любому cлову, которое начинается с большой буквы, выведите эти слова."
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
    regex pattern(R"(\b[A-Z][a-z]+\b)");
    sregex_iterator begin(str.begin(), str.end(), pattern);
    sregex_iterator end;
    int count = 1;
    for (sregex_iterator it = begin; it != end; ++it) {
        smatch match = *it;
        ResultS(("Word " + to_string(count) + ": ").c_str(), match.str().c_str(), xCenter, count++);
    }
    SetTestCount(7);
}

void Task3()
{
    CreateTask();
    TaskText(
        "Напишите регулярное выражение, которое будет соответствовать\n"
        "любому cлову, которое состоит из 5 букв, выведите эти слова."
    );
    string arr[]{
        "The quick brown fox jumps over the lazy dog.",
        "She loves to read books in the library.",
        "He went to the store to buy some groceries.",
        "I have a big test tomorrow, so I need to study.",
        "He is a very talented musician and plays the guitar.",
        "She is a great artist and paints beautiful pictures.",
        "We are going to the beach tomorrow to swim and sunbathe.",
        "The weather is beautiful today, so let's go for a walk.",
        "They are a very happy and loving family.",
        "I am feeling very tired today, so I need to rest.",
        "She is a very beautiful and graceful woman.",
        "The movie was very exciting and suspenseful.",
        "The music was amazing and inspiring.",
        "The night was dark and mysterious.",
        "The storm was fierce and destructive.",
        "The world is a beautiful and amazing place.",
        "Life is short, so enjoy every moment."
    };
    int a = RandomN(0, 16);
    string str = arr[a];
    DataS(str.c_str(), xCenter, 1);
    regex pattern(R"(\b\w{5}\b)");
    sregex_iterator begin(str.begin(), str.end(), pattern);
    sregex_iterator end;
    int count = 1;
    for (sregex_iterator it = begin; it != end; ++it) {
        smatch match = *it;
        ResultS(("Word " + to_string(count) + ": ").c_str(), match.str().c_str(), xCenter, count++);
    }
    SetTestCount(7);
}

void Task4()
{
    CreateTask();
    TaskText(
        "Заменить все числа в строке на \"число\"."
    );
    int count = RandomN(7, 11);
    string str = "";
    for (int i = 0; i < count; i++)
    {
        int a = RandomN(0, 500);
        str += to_string(a) + (i + 1 != count ? " " : "");
    }
    string res = str;
    regex pattern(R"(\d+)");
    string replacement = "число";
    res = regex_replace(res, pattern, replacement);
    DataS(str.c_str(), xCenter, 1);
    ResultS(res.c_str(), xCenter, 1);
    SetTestCount(9);
}

void Task5()
{
    CreateTask();
    TaskText(
        "Извлечь из строки все даты в формате ДД.ММ.ГГГГ."
    );
    string arr[]{
      "00", "01", "02", "03", "04", "05", "06", "07", "08", "09",
      "10", "11", "12", "13", "14", "15", "16", "17", "18", "19",
      "20", "21", "22", "23", "24", "25", "26", "27", "28", "29",
      "30", "31", "32", "33", "34", "35", "36", "37", "38", "39",
      "40", "41", "42", "43", "44", "45", "46", "47", "48", "49",
      "50", "51", "52", "53", "54", "55", "56", "57", "58", "59",
      "60", "61", "62", "63", "64", "65", "66", "67", "68", "69",
      "70", "71", "72", "73", "74", "75", "76", "77", "78", "79",
      "80", "81", "82", "83", "84", "85", "86", "87", "88", "89",
      "90", "91", "92", "93", "94", "95", "96", "97", "98", "99",
    };
    string str = "";
    int a = RandomN(4, 7);
    int b = RandomN(1, a);
    for (int i = 0; i < a; i++) {
        string s = arr[RandomN(1, 30)] + "." + arr[RandomN(1, 11)] + "." + to_string(RandomN(1900, 2024));
        str += s + (i + 1 != a ? " " : "");
    }
    DataS(str.c_str(), xCenter, 1);
    regex pattern(R"(\d{2}\.\d{2}\.\d{4})");
    sregex_iterator begin(str.begin(), str.end(), pattern);
    sregex_iterator end;
    int count = 1;
    for (sregex_iterator it = begin; it != end; ++it) {
        smatch match = *it;
        ResultS(("Date " + to_string(count) + ": ").c_str(), match.str().c_str(), xCenter, count++);
    }
    SetTestCount(7);
}

void Task6()
{
    CreateTask();
    TaskText(
        "Заменить все \\Sпробелы\\s в строке на подчеркивания."
    );
    string arr[]{
        "The sun shone brightly in the clear sky, a perfect day for a picnic.",
        "Laughter echoed through the park as children played on the swings.",
        "Waves crashed against the rocks, creating a soothing, rhythmic melody.",
        "The aroma of freshly baked cookies wafted through the air.",
        "Autumn leaves rustled in the breeze painting the world in vibrant hues.",
        "Snowflakes danced, transforming the landscape into a winter wonderland.",
        "The old bookstore had a unique charm, with its worn spines and cozy corners.",
        "Distant thunder rumbled, a prelude to the coming storm that loomed overhead.",
        "Distant mountains stood tall, their peaks shrouded in a veil of mist.",
        "The city skyline glittered at night, a testament to human ingenuity.",
        "Birdsong filled the air, a harmonious symphony welcoming the dawn.",
        "Flowers bloomed in the garden, their petals unfurling in a riot of color.",
        "The library is hushed silence was broken only by the turning of pages.",
        "Winding paths through the forest led to hidden glades, inviting exploration.",
        "The sound of a crackling fireplace provided a cozy ambiance on a cold night.",
        "The scent of freshly brewed coffee wafted through the cafe.",
        "Distant lights twinkled on the horizon a promise of adventure and discovery.",
        "The gentle lapping of waves against the shore was a soothing lullaby.",
        "Majestic mountains stood as silent sentinels, their grandeur inspiring awe.",
        "Soft piano music drifted through the room, creating a peaceful atmosphere.",
        "The smell of salt and sea air filled the lungs, invigorating the senses.",
        "Autumn leaves crunched underfoot, a symphony of the changing seasons.",
        "Distant church bells rang out, marking the passing of time.",
        "The roar of a waterfall thundered in the distance, a natural wonder.",
        "The sound of children is laughter echoed through the neighborhood, a sound.",
        "The scent of freshly mown grass filled the air, a sign of summer.",
        "Distant stars twinkled in the inky night sky, a tapestry of wonder.",
        "The sound of a crackling campfire provided a cozy ambiance in the woods.",
        "Distant mountains stood tall, their peaks reaching for the heavens.",
        "The sound of a lone owl is hoot pierced the silence of the night.",
        "Distant city lights glittered on the horizon a testament to human ingenuity.",
        "The gentle rustling of leaves in the breeze was a soothing symphony.",
        "Distant thunder rumbled, a harbinger of the coming storm.",
        "The sound of a babbling brook provided a calming backdrop in the forest.",
        "Distant hills rolled gently, their slopes dotted with wildflowers.",
        "The scent of freshly baked bread wafted through the air.",
        "Distant stars twinkled in the vast expanse of the night sky.",
        "The sound of a gentle rain patter on the roof was a soothing lullaby.",
        "Distant mountains rose majestically, their peaks capped with snow.",
        "The scent of freshly cut grass filled the air, a sign of summer.",
        "Distant waves crashed against the shore, a rhythmic symphony of nature.",
        "The sound of a lone bird is song pierced the silence of the morning.",
        "Distant city lights glittered on the horizon, a tapestry of human progress.",
        "The sound of a breeze rustling through the trees was a soothing melody.",
        "Distant thunderstorms rumbled, a reminder of the power of nature.",
        "The scent of freshly brewed coffee wafted through the cafe.",
        "Distant mountains stood tall, their peaks shrouded in a veil of mist.",
        "The sound of a lone wolf is howl pierced the silence of the night."
    };
    int a = RandomN(0, 47);
    string str = arr[a];
    regex pattern(R"(\s)");
    string replacement = "_";
    string res = regex_replace(str, pattern, replacement);
    DataS(str.c_str(), xCenter, 1);
    ResultS(res.c_str(), xCenter, 1);
    SetTestCount(9);
}

void Task7()
{
    CreateTask();
    TaskText(
        "Напишите регулярное выражение, которое поможет извлечь из строки все хэштеги."
    );
    string arr[]{
        "travel #wanderlust",
        "photography #capturemoments",
        "food #foodie",
        "art #creativity",
        "music #melodies",
        "nature #outdoors",
        "fashion #style",
        "fitness #healthylifestyle",
        "technology #innovation",
        "business #entrepreneurship",
        "education #learning",
        "science #discovery",
        "sports #athletics",
        "gaming #videogames",
        "movies #cinema",
        "books #literature",
        "love #romance",
        "friendship #loyalty",
        "family #togetherness",
        "happiness #joy",
        "inspiration #motivation",
        "success #achievements",
        "dreams #goals",
        "challenges #overcome",
        "life #journey",
        "beauty #aesthetics",
        "peace #tranquility",
        "hope #optimism",
        "gratitude #appreciation",
        "kindness #compassion"
    };
    string str = "";
    int a = RandomN(2, 3);
    for (int i = 0; i < a; i++) {
        str += arr[RandomN(0, 29)] + (i + 1 != a ? " " : "");
    }
    DataS(str.c_str(), xCenter, 1);
    regex pattern(R"(#\w+)");
    sregex_iterator begin(str.begin(), str.end(), pattern);
    sregex_iterator end;
    int count = 1;
    for (sregex_iterator it = begin; it != end; ++it) {
        smatch match = *it;
        ResultS(("Date " + to_string(count) + ": ").c_str(), match.str().c_str(), xCenter, count++);
    }
    SetTestCount(7);
}

void Task8()
{
    CreateTask();
    TaskText(
        "Проверить, содержит ли строка хотя бы один пробел."
    );
    string arr[] = {
        "Thequickbrownfoxjump soverthelazydog.",
        "Shelovestoreadbooksinthelibrary.",
        "Hewent tothestoretobuysomegroceries.",
        "They areplayingagameofbasketballinthepark.",
        "Ihaveabigtesttomorrow,so Ineedtostudy.",
        "Thechildren areplayinghappilyinthegarden.",
        "Heisaverytalentedmusicianandplaystheguitar.",
        "Sheisagreatartistandpaintsbeautifulpictures.",
        "Wearegoingtothebeach tomorrowtoswimandsunbathe.",
        "The weatherisbeautifultoday,solet'sgoforawalk.",
        "He is a verykindandgenerousperson.",
        "Sheisaveryintelligentandsuccessfulbusiness woman.",
        "Theyareaveryhappyandlovingfamily.",
        "Iamfeeling verytiredtoday,soI need torest.",
        "Heisaverystrongandathleticman.",
        "Sheisaverybeautifulandgracefulwoman.",
        "Themoviewasveryexcitingandsuspenseful.",
        "Thebookwasveryinterestingandinformative.",
        "Thefoodwasdelici ousandsatisfying.",
        "Themusicwasamazingandinspiring.",
        "Thejourney waslongbutrewarding.",
        "Theexperiencewasunforgettableandlife-changing.",
        "Theviewwasbreathtakingandawe-inspiring.",
        "Thesunsetwasstunningandromantic.",
        "The nightwasdarkandmysterious.",
        "Thestormwas fierceanddestructive.",
        "Theearthquakewaspowerfulandterrifying.",
        "Thevolcanowasactiveand dangerous.",
        "Theworldisabeautifulandamazing place.",
        "Lifeisshort,soenjoy every moment."
    };
    int a = RandomN(0, 29);
    string str = arr[a];
    DataS(str.c_str(), xCenter, 1);
    regex pattern(R"(\s+)");
    bool res = regex_search(str, pattern);
    ResultB(res, xCenter, 1);
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
    case 4:
        Task4(); break;
    case 5:
        Task5(); break;
    case 6:
        Task6(); break;
    case 7:
        Task7(); break;
    case 8:
        Task8(); break;
  }
}

void _stdcall inittaskgroup()
{
  CreateGroup("Reg0Begin", "Регулярные выражения: Начало",
    "", "qwqfsdf13dfttd", 8, InitTask);
}
