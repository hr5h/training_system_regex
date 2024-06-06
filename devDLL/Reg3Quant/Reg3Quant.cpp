#include <string>
#include "pt4taskmaker.h"
#include <regex>

void Task1()
{
  CreateTask();
  TaskText(
  "Найдите все английские слова в строке."
  );
  string arr[] = {
    "The car raced around the track.",
    "She wore a beautiful sari to the party.",
    "In the dark forest, they gathered around the fire.",
    "The stars sparkled in the night sky.",
    "The error in the program caused the system to crash.",
    "The warrior fought bravely in the battle.",
    "The farmers worked hard to harvest the crops.",
    "He wore a charming tie to the job interview.",
    "The barista made a delicious latte for me.",
    "Marcy started her journal with a heartfelt entry.",
    "The cat sat on the mat, licking its paws.",
    "The patient waited for the doctor in the lobby.",
    "Please do not forget to water the plants.",
    "The artist painted a magnificent sunset.",
    "He went to the market to buy some fruits.",
    "She went to the beach to watch the sunset.",
    "The waiter brought the dessert to our table.",
    "The student wrote a heartfelt letter to her teacher.",
    "The poet wrote a sonnet about his love for art.",
    "The guitarist played a beautiful melody.",
    "The sun shone brightly in the morning.",
    "She put on her running shoes and went for a jog.",
    "His sudden action surprised everyone in the room.",
    "The winner took home the championship trophy.",
    "The children ran into the garden to play.",
    "The curtain fell down during the performance.",
    "Jordan felt a strong connection with nature.",
    "The chicken fried in the pan was delicious.",
    "The kitten purred softly as I held it.",
    "Do not forget to turn off the lights when you leave the room."
  };
  int a = RandomN(0, 29);
  string str = arr[a];
  DataS(str.c_str(), xCenter, 1);
  regex pattern(R"([a-z]+)", regex_constants::icase);
  sregex_iterator begin(str.begin(), str.end(), pattern);
  sregex_iterator end;
  int count = 1;
  for (sregex_iterator it = begin; it != end; ++it) {
      smatch match = *it;
      ResultS(("Word " + to_string(count) + ": ").c_str(), match.str().c_str(), xCenter, count++);
  }
  SetTestCount(7);
}

void Task2()
{
    CreateTask();
    TaskText(
        "Найдите все обозначения размеров файлов в строке ниже.\n"
        "Размеры файлов будут состоять из числа (с десятичной точкой или без нее),\n"
        "за которым следуют KB, MB, GB или TB."
    );
    string arr[] {
        "TB", "GB", "MB", "KB" 
    };
    string arr2[] {
    "KB", "MB", "", "GB", "PB", "TB", "", "ZB", "YB", "kB", "", "mB", "gB", "tB", "", "zB", "yB", "KiB", "", "MiB",
    "GiB", "TiB", "", "ZiB", "YiB", "Kb", "Mb", "", "Gb", "Pb", "Tb", "", "Zb", "Yb", "kib", "mib", "", "gib", "tib",
    "zib", "yib", "K", "M", "", "G", "P", "T", "", "Z", "Y"
    };
    int a = RandomN(5, 9);
    int b = RandomN(1, a);
    string str = "";
    for (int i = 0; i < a; i++) {
        string s = "";
        int r = RandomN(0, 1);
        if (r == 1) s = to_string(RandomN(0, 999)) + arr[RandomN(0, 3)];
        else s =  to_string(RandomN(0, 999)) + ((i + 1 == b) ? arr[RandomN(0, 3)] : arr2[RandomN(0, 49)]);
        str += s + (i + 1 != a ? " " : "");
    }
    DataS(str.c_str(), xCenter, 1);
    regex pattern(R"(\d+\.*\d*[KMGT]B)");
    sregex_iterator begin(str.begin(), str.end(), pattern);
    sregex_iterator end;
    int count = 1;
    for (sregex_iterator it = begin; it != end; ++it) {
        smatch match = *it;
        ResultS(("File " + to_string(count) + ": ").c_str(), match.str().c_str(), xCenter, count++);
    }
    SetTestCount(7);
}

void Task3()
{
    CreateTask();
    TaskText(
        "Найти фамилии содержащие 5 или более символов и выведите их количество."
    );
    string arr2[] {
        "Chen", "Cook", "Gray", "Bell", "Hill", "King",
        "Khan", "Ross", "Reed", "Moss", "Ford", "Wood", "Diaz", "Dunn", "Yang",
        "Cole", "Fang", "Wong", "Roth", "Gill", "Moon", "West", "Kaur",
        "Jang", "Dodd", "Song", "Choi", "Chan", "Bass", "Zhou", "Fuji", "Park"
    };
    string arr[] {
    "Adams", "Agnus", "Alden", "Amery", "Arden", "Asher", "Avery", "Axton", "Baird", "Bayan",
    "Benet", "Blynn", "Brady", "Brent", "Bryar", "Caleb", "Celia", "Ceres", "Cyrus", "Darby",
    "Darla", "Davin", "Devin", "Doran", "Dylan", "Edith", "Edras", "Elias", "Emmett", "Erica",
    "Abbot", "Adams", "Aldas", "Allen", "Ander", "Arche", "Baily", "Baker", "Bates", "Benne",
    "Betts", "Blake", "Brady", "Brown", "Cabot", "Caine", "Carey", "Carr", "Clair", "Clark",
    "Davis", "Deans", "Dewar", "Doyle", "Drake", "Duffy", "Ellis", "Ford", "Gage", "Galen"
    };
    int a = RandomN(5, 9);
    int b = RandomN(1, a);
    string str = "";
    for (int i = 0; i < a; i++) {
        string s = "";
        int r = RandomN(0, 1);
        if (r == 1) s = arr[RandomN(0, 59)];
        else s = ((i + 1 == b) ? arr[RandomN(0, 59)] : arr2[RandomN(0, 31)]);
        str += s + (i + 1 != a ? " " : "");
    }
    DataS(str.c_str(), xCenter, 1);
    regex pattern(R"([A-Z][a-z]{4,})");
    sregex_iterator begin(str.begin(), str.end(), pattern);
    sregex_iterator end;
    int count = distance(begin, end);
    ResultN("Count = ", count, xCenter, 1, 3);
    SetTestCount(7);
}

void Task4()
{
    CreateTask();
    TaskText(
        "В некоторых языках программирования (например, Java) за некоторыми целыми\n"
        "числами и числами с плавающей запятой (точкой) могут следовать l / L и f / F,\n"
        "чтобы указать, что они должны рассматриваться как\n"
        "long / float (соответственно), а не как обычные int / double.\n"
        "Найдите все действительные \"long\" числа в строке ниже и выведите их позиции."
    );
    string arr[]{
        "l", "L"
    };
    string arr2[]{
        "f", "F", "k", "", "K", "a", "A", "b", "B", "r", "R", "n", "N", "m", "M", "c", "C"
    };
    int a = RandomN(5, 9);
    int b = RandomN(1, a);
    string str = "";
    for (int i = 0; i < a; i++) {
        string s = "";
        int r = RandomN(0, 1);
        if (r == 1) s = to_string(RandomN(0, 999)) + arr[RandomN(0, 1)];
        else s = to_string(RandomN(0, 999)) + ((i + 1 == b) ? arr[RandomN(0, 1)] : arr2[RandomN(0, 16)]);
        str += s + (i + 1 != a ? " " : "");
    }
    DataS(str.c_str(), xCenter, 1);
    regex pattern(R"(\d+[lL])");
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

void Task5()
{
    CreateTask();
    TaskText(
        "Номера страхового индивидуального лицевого счёта(СНИЛС) представляют\n"
        "собой 11-значные номера в формате ХХХ-ХХХ-ХХХ YY, где каждый X, Y\n"
        "может быть любой цифрой [0-9]. Используя один или несколько классов символов,\n"
        "напишите регулярное выражение, чтобы найти правильно отформатированные\n"
        "номера СНИЛС в списке ниже."
    );
    int a = RandomN(3, 5);
    int b = RandomN(1, a);
    string arr[] = {
        "113-25=1902",
        "34 H23-_3-9982",
        "1I1-O0-E38B",
        "151+222=213",
        "69+19=30",
        "911=312",
        "1119=129",
        "1289=109",
        "=938471",
        "1111=23",
        "44451=541",
        "564=4325",
        "1221=1239",
        "1992=1929",
        "11119=1289",
        "11=1+2+3+4+5",
        "118=2+4+6+8",
        "1289=1-2--8",
        "1101110=2",
        "11126=13",
        "12381=1++9",
        "3+4-7+8-5-9=0",
        "1112=1212",
        "151+55=515",
        "12391=1119",
        "14118=1985",
        "1521=19",
        "32312=1289",
        "1918=1917",
        "44+668+22=220"
    };
    string str = "";
    for (int i = 0; i < a; i++) {
        string s = "";
        int r = RandomN(0, 1);
        if (r == 1) s = to_string(RandomN(100, 999)) + "-" + to_string(RandomN(100, 999)) + "-" + to_string(RandomN(100, 999)) + " " + to_string(RandomN(10, 99));
        else s = ((i + 1 == b) ? to_string(RandomN(100, 999)) + "-" + to_string(RandomN(100, 999)) + "-" + to_string(RandomN(100, 999)) + " " + to_string(RandomN(10, 99)) : arr[RandomN(0, 29)]);
        str += s + (i + 1 != a ? " " : "");
    }
    DataS(str.c_str(), xCenter, 1);
    regex pattern(R"(\d{3}-\d{3}-\d{3} \d{2})");
    sregex_iterator begin(str.begin(), str.end(), pattern);
    sregex_iterator end;
    int count = 1;
    for (sregex_iterator it = begin; it != end; ++it) {
        smatch match = *it;
        ResultS(("Number " + to_string(count) + ": ").c_str(), match.str().c_str(), xCenter, count++);
    }
    SetTestCount(7);
}

void Task6()
{
    CreateTask();
    TaskText(
        "Предположим, что система проверки надежности пароля на веб-сайте требует,\n"
        "чтобы пароли пользователей составляли от 6 до 12 символов, а также\n"
        "не содержали пробелов. Каждый пароль содержится в скобках () для удобства\n"
        "сопоставления. Напишите регулярное выражение, помечающее\n"
        "\\Sневерные\\s пароли в строке ниже."
    );
    int a = RandomN(3, 5);
    int b = RandomN(1, a);
    string arr2[]{
        "(Xanadu.2112)", "(OfSalesmen!)", "(Password1)", "(StrongPass)",
        "(Secret123)", "(SecurePass)", "(VeryStrong)", "(Unbreakable)",
        "(SuperSecret)", "(Password12)", "(Secure123)", "(VeryStrong1)",
        "(Unbreakable)", "(SuperSecret)", "(Password123)", "(StrongPass1)",
        "(Secret1234)", "(SecurePass1)", "(VeryStrong2)", "(Unbreakable)",
        "(SuperSecret)", "(Password123)", "(StrongPass2)", "(Secret12345)",
        "(SecurePass2)", "(VeryStrong3)", "(Unbreakable)", "(SuperSecret)",
        "(Password123)", "(StrongPass3)", "(Secret12346)", "(SecurePass3)"
    };
    string arr[]{
        "(12345)", "(my password)", "(su_do)", "(Pass)",
        "(Stro ng)", "(Secr et)", "(Sre)", "(V ery)",
        "(Unb eak)", "(Sup er)", "(Pas1)", "(Str ong1)",
        "(Secr et1)", "(Se cure1)", "(Ve 1)", "(Unbre ak1)",
        "(Sup er1)", "(Pas2)", "(Str ong2)", "(Secre t2)",
        "(Sec ure2)", "(Ve ry2)", "(Unbre ak2)", "(Supe r2)",
        "(P3)", "(S t3)", "(Sec 3)", "(Secu re3)",
        "(S3)", "(Pass 1)", "(Strong 1)", "(Secret7 1)"
    };
    string str = "";
    for (int i = 0; i < a; i++) {
        string s = "";
        int r = RandomN(0, 1);
        if (r == 1) s = arr[RandomN(0, 31)];
        else s = ((i + 1 == b) ? arr[RandomN(0, 31)] : arr2[RandomN(0, 31)]);
        str += s + (i + 1 != a ? " " : "");
    }
    DataS(str.c_str(), xCenter, 1);
    regex pattern(R"(\([^()]{0,5}\)|\([^()]+\s[^()]*\))");
    sregex_iterator begin(str.begin(), str.end(), pattern);
    sregex_iterator end;
    int count = 1;
    for (sregex_iterator it = begin; it != end; ++it) {
        smatch match = *it;
        ResultS(("Password " + to_string(count) + ": ").c_str(), match.str().c_str(), xCenter, count++);
    }
    SetTestCount(7);
}

void Task7()
{
    CreateTask();
    TaskText(
        "Напишите регулярное выражение, которое будет соответствовать любому числу,\n"
        "содержащему от 3 до 7 цифр, выведите эти числа."
    );
    int a = RandomN(5, 7);
    int b = RandomN(1, a);
    string str = "";
    for (int i = 0; i < a; i++) {
        string s = "";
        int r = RandomN(0, 1);
        if (r == 1) s = to_string(RandomN(100, 9999999));
        else s = ((i + 1 == b) ? to_string(RandomN(100, 9999999)) : to_string(RandomN(0, 99)));
        str += s + (i + 1 != a ? " " : "");
    }
    DataS(str.c_str(), xCenter, 1);
    regex pattern(R"(\b\d{3,7}\b)");
    sregex_iterator begin(str.begin(), str.end(), pattern);
    sregex_iterator end;
    int count = 1;
    for (sregex_iterator it = begin; it != end; ++it) {
        smatch match = *it;
        ResultS(("Number " + to_string(count) + ": ").c_str(), match.str().c_str(), xCenter, count++);
    }
    SetTestCount(7);
}

void Task8()
{
    CreateTask();
    TaskText(
        "С помощью регулярного выражения замените все последовательности\n"
        "из 3 или более пробелов на один пробел."
    );
    string arr[] = {
    "The   car raced  around     the track.",
    "She      wore a beautiful   sari to  the    party.",
    "In the dark  forest,  they    gathered around the fire.",
    "The   stars sparkled  in    the night   sky.",
    "The   error in the program caused the system to crash.",
    "The  warrior fought         bravely  in the battle.",
    "The farmers     worked hard to harvest the crops.",
    "He wore a    charming tie  to   the job   interview.",
    "The   barista    made a    delicious     latte  for    me.",
    "Marcy  started her   journal     with    a heartfelt    entry.",
    "The    cat   sat on the     mat, licking    its paws.",
    "The  patient    waited  for  the     doctor in     the lobby.",
    "Please     do   not    forget to water    the plants.",
    "The artist   painted  a     magnificent    sunset.   ",
    "He went to    the market to    buy   some     fruits.",
    "She    went    to the beach to       watch the sunset.",
    "The waiter     brought    the dessert   to our     table.",
    "The     student wrote a heartfelt   letter to her teacher.",
    "The  poet  wrote    a sonnet    about his      love  for art.",
    "The    guitarist      played   a   beautiful    melody.",
    "The   sun   shone    brightly  in   the    morning.  ",
    "She   put    on   her   running   shoes  and  went for a jog.",
    "His  sudden   action   surprised    everyone in    the room.",
    "The    winner   took  home  the    championship       trophy.",
    "The children   ran  into  the   garden to       play.",
    "The curtain   fell down   during    the performance.",
    "Jordan   felt a     strong connection   with    nature.",
    "The    chicken  fried   in  the    pan       was  delicious.",
    "The   kitten  purred  softly as   I held  it.",
    "Do not forget to  turn off     the lights when you leave the room."
    };
    string str = arr[RandomN(0, 29)];
    string res = "";
    regex pattern(R"(\s{3,})");
    string replacement = " ";
    res = regex_replace(str, pattern, replacement);
    DataS(str.c_str(), xCenter, 1);
    ResultS(res.c_str(), xCenter, 1);
    SetTestCount(9);
}

void Task9()
{
    CreateTask();
    TaskText(
        "Напишите регулярное выражение, которое будет соответствовать строке,\n"
        "содержащей от 1 до 3 символов подчёркивания."
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
        "odd", "off", "ply", "rag", "ray", "rub", "rye", "say", "see", "sky",
        "____", "_____", "______", "____", "_____", "______", "____", "_____", "______",
        "____", "_____", "______", "____", "_____", "______", "____", "_____", "______",
        "____", "_____", "______", "____", "_____", "______", "____", "_____", "______",
        "____", "_____", "______", "____", "_____", "______", "____", "_____", "______",
        "____", "_____", "______", "____", "_____", "______", "____", "_____", "______",
        "____", "_____", "______", "____", "_____", "______", "____", "_____", "______",
        "____", "_____", "______", "____", "_____", "______", "____", "_____", "______",
        "_", "__", "___", "_", "__", "___", "_", "__", "___", "_", "__", "___", "_", "__", "___",
        "_", "__", "___", "_", "__", "___", "_", "__", "___", "_", "__", "___", "_", "__", "___",
    };
    int a = RandomN(7, 10);
    string str = "";
    for (int i = 0; i < a; i++) {
        str += arr[RandomN(0, 192)] + (i + 1 != a ? " " : "");
    }
    DataS(str.c_str(), xCenter, 1);
    regex pattern(R"(\b__?_?\b)");
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
    case 9:
        Task9(); break;
    }
}

void _stdcall inittaskgroup()
{
  CreateGroup("Reg3Quant", "Регулярные выражения: Квантификаторы",
    "", "qwqfsdf13dfttd", 9, InitTask);
}
