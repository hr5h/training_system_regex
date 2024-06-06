#include <string>
#include "pt4taskmaker.h"
#include <regex>

void Task1()
{
  CreateTask();
  TaskText(
  "Есть ли в строке квадратные скобки '[]'?"
  );
  string arr[]{
        "My sister asks[] to bring her water.",
        "I forgot to turn off the bathroom[] light.",
        "Beautiful roses[] are blooming in the garden.",
        "Yesterday[] I accidentally broke a vase.",
        "My friend always wears[] sunglasses.",
        "There were[] guest chairs in the hall.",
        "Colorful flowers[] are blooming on the street.",
        "I lost the keys[] to the apartment.",
        "There were[] fresh fruits in the basket.",
        "She went for a walk[] with the dog.",
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
        "We plan to visit[] stores this weekend.",
        "My friend offered to go to a football[] match with me.",
        "I forgot to turn on the[] mailbox this week.",
        "His parents bought him a new laptop[] as a gift.",
        "There were many trees in the park with[] tall branches.",
        "When I called the car service, they told me that it was closed this week.",
        "I have sent[] emails about participation in the conference.",
        "After a long[] flight, I felt tired.",
        "We decided to build[] a new house in the mountains.",
        "I cooked[] chicken for dinner.",
        "After a long[] day, I decided to take a hot bath.",
        "There was a container[] of milk on the table.",
        "I noticed that my neighbor's car[] battery failed.",
        "There were[] chairs for vacationers in the park.",
        "He found a book[] in the library about aviation.",
        "We decorated[] the house for the holiday.",
        "Every day[] I do exercises in the morning.",
        "She saw[] a strange object on the floor.",
        "We decided[] to take a walk in the park on Sunday.",
        "Yesterday I bought[] concert tickets."
  };
  int a = RandomN(0, 57);
  string str = arr[a];
  DataS(str.c_str(), xCenter, 1);
  regex pattern(R"(\[\])");
  bool res = regex_search(str, pattern);
  ResultB(res, xCenter, 1);
  SetTestCount(9);
}

void Task2()
{
    CreateTask();
    TaskText(
        "Найдите все вхождения обратного слэша '\\\\' в строке, замените на слэш '/'\n"
        "и выведите измененную строку."
    );
    string arr[]{
        "C:\\Users\\John\\Documents\\VacationPhotos",
        "C:\\Users\\Emily\\Videos\\FamilyMemories",
        "D:\\Projects\\WorkFiles\\Presentation.pptx",
        "E:\\Downloads\\SoftwareInstallers\\AdobePhotoshop.exe",
        "F:\\Music\\Playlists\\WorkoutMix.mp3",
        "G:\\Backup\\PersonalData\\TaxForms.zip",
        "H:\\School\\Essays\\ResearchPaper.docx",
        "I:\\Travel\\Italy2022\\SightseeingTour.jpg",
        "J:\\Hobbies\\Gardening\\FlowerArrangements.png",
        "K:\\Business\\Clients\\ContractDocuments.pdf",
        "L:\\Home\\Renovations\\KitchenRemodel.mov",
        "M:\\Sports\\Basketball\\GameHighlights.avi",
        "N:\\Pets\\DogTraining\\ObedienceLessons.wav",
        "O:\\Coding\\Projects\\WebDevelopment.html",
        "P:\\Education\\OnlineCourses\\ProgrammingFundamentals.mp4",
        "Q:\\Family\\Birthdays\\BirthdayParty.gif",
        "R:\\Freelance\\GraphicDesign\\LogoConcepts.psd",
        "S:\\Recipes\\Cookbook\\FavoriteDishes.txt",
        "T:\\Travel\\RoadTrips\\ScenicRoute.jpeg",
        "U:\\Hobbies\\Painting\\LandscapePaintings.tiff",
        "V:\\Work\\Presentations\\SalesPitch.pptx",
        "W:\\Personal\\Journals\\ReflectionDiary.docx",
        "X:\\Fitness\\WorkoutRoutines\\YogaSessions.mp3",
        "Y:\\Pets\\CatCare\\GroomingTips.jpg",
        "Z:\\Investments\\Portfolio\\StockPerformance.xlsx",
        "A:\\Movies\\Favorites\\ClassicFilms.mkv",
        "B:\\Photography\\Nature\\LandscapePhotography.png",
        "C:\\Travel\\Europe\\ParisVacation.mov",
        "D:\\Coding\\Projects\\MobileAppDevelopment.ipa",
        "E:\\Family\\Memories\\FamilyReunion.gif"
    };
    int a = RandomN(0, 29);
    string str = arr[a];
    string res = str;
    regex pattern(R"(\\)");
    string replacement = "/";
    res = regex_replace(res, pattern, replacement);
    DataS(str.c_str(), xCenter, 1);
    ResultS(res.c_str(), xCenter, 1);
    SetTestCount(9);
}

void Task3()
{
    CreateTask();
    TaskText(
        "Найти все символы табуляции (\\\\t) в строке и выведите их количество."
    );
    string arr[] = {
    "\\t, \\t, and \\t are all regex escape\\t seque\\tnces.",
    "The car\\t raced\\t aro\\tund the\\t track.",
    "She wo\\tre a\\t beauti\\tful sari\\t to the party.",
    "In the dark\\t forest, they\\t gathered a\\tround the fire.",
    "The stars spar\\tkled in\\t the night\\t sky.",
    "The\\t err\\tor in the\\t program caused\\t the\\t system to crash.",
    "The\\t warrior fought\\t brav\\tely in the\\t battle.",
    "The farmers worked\\t hard to har\\tvest\\t the crops.",
    "He wore a char\\tming\\t tie to the\\t job interview.",
    "The bari\\tsta made a delicious\\t latte for me.\\t",
    "Marcy started\\t her journal with\\t a hear\\ttfelt\\t entry.",
    "The cat\\t sat\\t on the mat,\\t li\\tcking\\t its paws.",
    "\\tThe pa\\ttient\\t waited for\\t the doctor in the lobby.",
    "Plea\\tse don't\\t forget \\tto water the plants.",
    "The art\\tist painted a magnificent\\t sunset.",
    "He went to th\\te market to buy\\t so\\tme fruits.",
    "She went to\\t the bea\\tch\\t to watch the sunset.",
    "The waiter\\t brought the des\\tsert\\t to our table.\\t",
    "The student wrote a\\t hear\\ttfelt\\t letter to her teacher\\t.",
    "The poet wrote a\\t son\\tnet\\t about\\t his love for\\t art.",
    "The \\tguitarist\\t played\\t a bea\\tutiful\\t melody.",
    "The sun shone\\t brig\\thtly\\t in the\\t morning.",
    "She put on her\\t runn\\ting shoes\\t and went for\\t a jog.",
    "His sudden\\t action surpr\\tised\\t everyone in the\\t room.",
    "The wi\\tnner took\\t home the \\tchampion\\tship\\t trophy.",
    "The children\\t ran into the\\t ga\\trden to play\\t.",
    "The curtain fell down\\t during the\\t perfor\\tmance\\t.",
    "Jordan f\\telt a strong\\t conne\\tction\\t with nature.",
    "The chicken\\t fried in the pan\\t was del\\ticious.",
    "The kitten pu\\trred\\t softly\\t as I held it.",
    "Don't\\t forget to\\t turn off the\\t lights wh\\ten you leave\\t the room."
    };
    int a = RandomN(0, 30);
    string str = arr[a];
    regex pattern(R"(\\t)");
    sregex_iterator begin(str.begin(), str.end(), pattern);
    sregex_iterator end;
    int count = distance(begin, end);
    DataS(str.c_str(), xCenter, 1);
    ResultN("Count = ", count, xCenter, 1, 3);
    SetTestCount(7);
}

void Task4()
{
    CreateTask();
    TaskText(
        "Написать regex для поиска escape-последовательностей(\\\\r, \\\\t, \\\\n)\n"
        "и выведите их позиции."
    );
    string arr[] = {
    "\\r, \\t, and \\n are all regex escape sequences.",
    "The car\\t raced\\r around the\\n track.",
    "She wore a\\n beautiful sari\\t to the party.",
    "In the dark\\r forest, they\\t gathered around the fire.",
    "The stars sparkled in\\n the night\\r sky.",
    "The\\t error in the\\r program caused\\n the system to crash.",
    "The\\r warrior fought\\n bravely in the\\t battle.",
    "The farmers worked\\r hard to harvest\\t the crops.",
    "He wore a charming\\r tie to the\\t job interview.",
    "The barista made a delicious\\t latte for me.\\n",
    "Marcy started\\r her journal with\\t a heartfelt\\n entry.",
    "The cat sat\\r on the mat,\\n licking\\t its paws.",
    "\\nThe patient\\t waited for\\r the doctor in the lobby.",
    "Please don't\\n forget to water the plants.",
    "The artist painted a magnificent\\t sunset.",
    "He went to the market to buy\\r some fruits.",
    "She went to\\n the beach\\r to watch the sunset.",
    "The waiter\\n brought the dessert\\t to our table.\\r",
    "The student wrote a\\n heartfelt\\t letter to her teacher\\r.",
    "The poet wrote a\\n sonnet about\\t his love for\\r art.",
    "The guitarist\\n played\\t a beautiful\\r melody.",
    "The sun shone\\r brightly\\n in the\\t morning.",
    "She put on her\\r running shoes\\t and went for\\n a jog.",
    "His sudden\\n action surprised\\r everyone in the\\t room.",
    "The winner took\\r home the \\nchampionship\\t trophy.",
    "The children\\t ran into the\\n garden to play\\r.",
    "The curtain fell down\\n during the\\t performance\\r.",
    "Jordan felt a strong\\t connection\\r with nature.",
    "The chicken\\t fried in the pan\\r was delicious.",
    "The kitten purred\\n softly\\t as I held it.",
    "Don't\\r forget to\\n turn off the\\t lights when you leave the room."
    };
    int a = RandomN(0, 30);
    string str = arr[a];
    DataS(str.c_str(), xCenter, 1);
    regex pattern(R"(\\[ntr])");
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

    SetTestCount(7);
}

void Task5()
{
    CreateTask();
    TaskText(
        "Найдите слова содержащие символ табуляции (\\\\t) внутри слова,\n"
        "а не в начале или конце и выведите их."
    );
    string arr[] = {
    "\\t, \\t, a\\tnd \\t are all regex escape\\t seque\\tnces.",
    "The car\\t raced\\t aro\\tund the\\t track.",
    "She wo\\tre a\\t beauti\\tful sari\\t to the party.",
    "In the dark\\t forest, they\\t gath\\tered a\\tround the fire.",
    "The st\\tars spar\\tkled in\\t the night\\t sky.",
    "The\\t err\\tor in the\\t prog\\tram caused\\t the\\t system to crash.",
    "The\\t warr\\tior fought\\t brav\\tely in the\\t battle.",
    "The farmers wo\\trked\\t hard to har\\tvest\\t the crops.",
    "He wore a char\\tming\\t ti\\te to the\\t job interview.",
    "The bari\\tsta made a deli\\tcious\\t latte for me.\\t",
    "Marcy started\\t her journal with\\t a hear\\ttfelt\\t entry.",
    "The cat\\t sat\\t on t\\the mat,\\t li\\tcking\\t its paws.",
    "\\tThe pa\\ttient\\t wai\\tted for\\t the doctor in the lobby.",
    "Plea\\tse don't\\t forget \\tto water the plants.",
    "The art\\tist painted a magni\\tficent\\t sunset.",
    "He went to th\\te ma\\trket to buy\\t so\\tme fruits.",
    "She went to\\t the bea\\tch\\t to watch the su\\tnset.",
    "The waiter\\t brou\\tght the des\\tsert\\t to o\\tur table.\\t",
    "The stu\\tdent wrote a\\t hear\\ttfelt\\t lett\\ter to her teacher\\t.",
    "The poet wrote a\\t son\\tnet\\t about\\t his l\\tove for\\t art.",
    "The \\tguitarist\\t played\\t a bea\\tutiful\\t melody.",
    "The sun shone\\t brig\\thtly\\t in the\\t morning.",
    "She put on her\\t runn\\ting shoes\\t and we\\tnt for\\t a jog.",
    "His sud\\tden\\t action surpr\\tised\\t ever\\tyone in the\\t room.",
    "The wi\\tnner took\\t home the \\tchampion\\tship\\t trophy.",
    "The children\\t ran into th\\te\\t ga\\trden to play\\t.",
    "The curtain fell down\\t duri\\tng the\\t perfor\\tmance\\t.",
    "Jordan f\\telt a stro\\tng\\t conne\\tction\\t with nature.",
    "The chic\\tken\\t fr\\tied in the pan\\t was del\\ticious.",
    "The kitten pu\\trred\\t softly\\t as I held it.",
    "Don't\\t forget to\\t tu\\trn off the\\t lights wh\\ten you leave\\t the room."
    };
    int a = RandomN(0, 30);
    string str = arr[a];
    DataS(str.c_str(), xCenter, 1);
    regex pattern(R"(\w+\\t\w+)");
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
  }
}

void _stdcall inittaskgroup()
{
  CreateGroup("Reg2Esc", "Регулярные выражения: Escape-последовательности",
    "", "qwqfsdf13dfttd", 5, InitTask);
}
