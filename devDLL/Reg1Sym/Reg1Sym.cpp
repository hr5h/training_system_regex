#include <string>
#include "pt4taskmaker.h"
#include <regex>

void Task1()
{
  CreateTask();
  TaskText(
    "\\PНайти названия всех животных из трёх букв(bat, cat, rat)."
  );
  string arr[] {
      "A bat, a cat, and a rat walked into a bar.",
      "The cat ran after the rat.",
      "The rat scurried away from the cat.",
      "The bat hung upside down from a branch.",
      "The cat pounced on the unsuspecting rat.",
      "The rat squeaked in fear of the cat.",
      "The bat flew silently through the night.",
      "The cat batted at a toy mouse.",
      "The rat hid in a dark, damp corner.",
      "The bat is wings flapped in the moonlight.",
      "The rat nibbled on some cheese.",
      "The cat meowed for attention.",
      "The rat dodged the cat is sharp claws.",
      "The bat searched for insects to eat.",
      "The cat chased the playful rat.",
      "The rat gnawed on a piece of wood.",
      "The bat navigated through the trees.",
      "The cat basked in the warm sun.",
      "The rat darted into a hole.",
      "The bat hung from the ceiling of the cave.",
      "The cat leaped onto the windowsill."
  };
  int a = RandomN(0, 20);
  string str = arr[a];
  DataS(str.c_str(), xCenter, 1);
  regex pattern("[bcr]at");
  sregex_iterator begin(str.begin(), str.end(), pattern);
  sregex_iterator end;
  int count = 1;
  for (sregex_iterator it = begin; it != end; ++it) {
      smatch match = *it;
      ResultS(("Animal " + to_string(count) + ": ").c_str(), match.str().c_str(), xCenter, count++);
  }
  SetTestCount(5);
}

void Task2()
{
    CreateTask();
    TaskText(
        "Шестнадцатеричные числа могут содержать цифры 0-9, а также буквы A-F.\n"
        "При использовании их для указания цветов, шестнадцатеричные коды могут\n"
        "содержать не более трех символов. Создайте регулярное выражение, чтобы найти\n"
        "действительные шестнадцатеричные коды и выведите их позиции."
    );
    int a = RandomN(5, 9);
    int b = RandomN(1, a);
    string str = "";
    for (int i = 0; i < a; i++) {
        string color = "";
        for (int j = 0; j < 3; j++) {
            int r = RandomN(0, 1);
            if (r == 0) color += to_string(RandomN(0, 9));
            else color += (i + 1 == b) ? char(65 + RandomN(0, 5)) : char(65 + RandomN(0, 10));
        }
        str += color + (i + 1 != a ? " " : "");
    }
    DataS(str.c_str(), xCenter, 1);

    regex pattern("[0-9A-F]{3}");
    smatch match;
    auto it = sregex_iterator(str.begin(), str.end(), pattern);
    auto end = sregex_iterator();
    int count = 1;
    for (; it != end; ++it) {
        smatch match = *it;
        int start = static_cast<int>(match.position());
        int end = start + static_cast<int>(match.length());
        ResultN(("Position " + to_string(count) + " = ").c_str(), start, xCenter, count++, 3);
    }

    SetTestCount(9);
}

void Task3()
{
    CreateTask();
    TaskText(
        "Используя диапазоны символов, создайте регулярное выражение, которое будет\n"
        "выбирать только согласные и выведите их количество."
    );
    string arr[] { 
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
    regex pattern("[^aeiou,. ]", regex_constants::icase);
    sregex_iterator begin(str.begin(), str.end(), pattern);
    sregex_iterator end;
    int count = distance(begin, end);
    DataS(str.c_str(), xCenter, 1);
    ResultN("Count = ", count, xCenter, 1, 3);
    SetTestCount(5);
}

void Task4()
{
    CreateTask();
    TaskText(
        "Используйте знак отрицания ^ в квадратных скобках, чтобы сопоставить\n"
        "все слова ниже, которые не заканчиваются на \\Sy\n"
        "и выведите их в правильном формате."
    );
    string arr[] = {
        "act", "age", "air", "aim", "awe", "bag", "beg", "bow", "bud", "buy",
        "bye", "can", "cob", "cry", "day", "dew", "dig", "dip", "dry", "ear",
        "eat", "elm", "end", "eye", "fab", "fan", "fat", "fay", "fee", "fez",
        "fig", "fin", "fit", "fly", "fog", "for", "fry", "fur", "gap", "gel",
        "get", "gin", "giv", "gon", "gob", "gum", "guy", "has", "hay", "hen",
        "hid", "him", "hog", "how", "hue", "ivy", "jam", "jet", "joy", "jug",
        "kay", "key", "kid", "lap", "lax", "lay", "lib", "lid", "lie", "lob",
        "log", "lot", "lug", "lye", "mac", "mad", "may", "met", "mew", "mix",
        "mob", "mow", "net", "new", "nib", "nil", "nip", "nut", "oat", "ode",
        "odd", "off", "ply", "rag", "ray", "rub", "rye", "say", "see", "sky"
    };
    int a = RandomN(5, 9);
    string str = "";
    for (int i = 0; i < a; i++) {
        str += arr[RandomN(0, 99)] + (i + 1 != a ? " " : "");
    }
    regex pattern("[a-z][a-z][^y ]");
    DataS(str.c_str(), xCenter, 1);
    sregex_iterator begin(str.begin(), str.end(), pattern);
    sregex_iterator end;
    int count = 1;
    for (sregex_iterator it = begin; it != end; ++it) {
        smatch match = *it;
        string res = to_string(count++) + ") " + match.str() + ";";
        ResultS(res.c_str(), xCenter, count);
    }
    SetTestCount(9);
}

void Task5()
{
    CreateTask();
    TaskText(
        "Напишите регулярное выражение, используя диапазон и знак отрицания \\^ \n"
        "в квадратных скобках [], чтобы найти все года между \\S1977\\s и \\S1982\\s (включительно)\n"
        "и замените их на \\S2024."
    );
    int count = RandomN(5, 10);
    string str = "";
    for (int i = 0; i < count; i++)
    {
        int a = RandomN(1973, 1986);
        str += to_string(a) + (i + 1 != count ? " " : "");
    }
    string res = str;
    regex pattern("19[78][^3-6]");
    string replacement = "2024";
    res = regex_replace(res, pattern, replacement);
    DataS(str.c_str(), xCenter, 1);
    ResultS(res.c_str(), xCenter, 1);
    SetTestCount(9);
}

void Task6()
{
    CreateTask();
    TaskText(
        "Напишите регулярное выражение, которое будет соответствовать любому слову,\n"
        "содержащему хотя бы одну цифру, выведите эти слова."
    );
    string arr[]{
        "A bat, a cat, and a rat walked into a bar.",
        "The cat ran after the rat.",
        "The rat scurried away from the cat.",
        "The bat hung upside down from a branch.",
        "The cat pounced on the unsuspecting rat.",
        "The rat squeaked in fear of the cat.",
        "The bat flew silently through the night.",
        "The cat batted at a toy mouse.",
        "The rat hid in a dark, damp corner.",
        "The bat is wings flapped in the moonlight.",
        "The rat nibbled on some cheese.",
        "The cat meowed for attention.",
        "The rat dodged the cat is sharp claws.",
        "The bat searched for insects to eat.",
        "The cat chased the playful rat.",
        "The rat gnawed on a piece of wood.",
        "The bat navigated through the trees.",
        "The cat basked in the warm sun.",
        "The rat darted into a hole.",
        "The bat hung from the ceiling of the cave.",
        "The cat leaped onto the windowsill."
    };
    int a = RandomN(0, 20);
    int b = RandomN(1, 5);
    string str = arr[a];
    for (int i = 0; i < b; i++) {
        int c = RandomN(0, str.length());
        str[c] = (char)(RandomN(48, 57));
    }
    DataS(str.c_str(), xCenter, 1);
    regex pattern(R"(\w*\d\w*)");
    sregex_iterator begin(str.begin(), str.end(), pattern);
    sregex_iterator end;
    int count = 1;
    for (sregex_iterator it = begin; it != end; ++it) {
        smatch match = *it;
        ResultS(("Word " + to_string(count) + ": ").c_str(), match.str().c_str(), xCenter, count++);
    }
    SetTestCount(7);
}

void Task7()
{
    CreateTask();
    TaskText(
        "Напишите регулярное выражение, которое будет соответствовать любому слову,\n"
        "содержащему хотя бы одну цифру, выведите эти слова."
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
    int b = RandomN(1, 5);
    string str = arr[a];
    DataS(str.c_str(), xCenter, 1);
    regex pattern(R"(\w*[A-Z]\w*)");
    sregex_iterator begin(str.begin(), str.end(), pattern);
    sregex_iterator end;
    int count = 1;
    for (sregex_iterator it = begin; it != end; ++it) {
        smatch match = *it;
        ResultS(("Word " + to_string(count) + ": ").c_str(), match.str().c_str(), xCenter, count++);
    }
    SetTestCount(7);
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
  }
}

void _stdcall inittaskgroup()
{
  CreateGroup("Reg1Sym", "Регулярные выражения: Указание множества допустимых символов",
    "", "qwqfsdf13dfttd", 7, InitTask);
}
