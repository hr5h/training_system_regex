#include <string>
#include "pt4taskmaker.h"
#include <regex>

void Task1()
{
  CreateTask();
  TaskText(
    "�������� ���������� ��������� ��� �������� ������������ ������ �������\n"
    "� ������� ��:��:�� � ������� ��� ����������."
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
      string s = "";
      int r = RandomN(0, 1);
      if (r == 1) s = arr[RandomN(0, 23)] + ":" + arr[RandomN(0, 59)] + ":" + arr[RandomN(0, 59)];
      else s = ((i + 1 == b) ? arr[RandomN(0, 23)] + ":" + arr[RandomN(0, 59)] + ":" + arr[RandomN(0, 59)] : arr[RandomN(0, 99)] + ":" + arr[RandomN(0, 99)] + ":" + arr[RandomN(0, 99)]);
      str += s + (i + 1 != a ? " " : "");
  }
  DataS(str.c_str(), xCenter, 1);
  regex pattern(R"(([01]\d|2[0-3])(:[0-5]\d){2})");
  sregex_iterator begin(str.begin(), str.end(), pattern);
  sregex_iterator end;
  int count = 1;
  for (sregex_iterator it = begin; it != end; ++it) {
      smatch match = *it;
      ResultS(("Time " + to_string(count) + ": ").c_str(), match.str().c_str(), xCenter, count++);
  }
  SetTestCount(7);
}

void Task2()
{
    CreateTask();
    TaskText(
        "�������� ���������� ��������� ��� �������� ������������ ������ MAC-������\n"
        "(������ MAC-������ ����� ���� ������������ 3 ���������:\n"
        "1. �������� ������� ����� ����(6 �������). ������: 1C-4F-FD-E1-88-0A;\n"
        "2. ���������� ������� ����� ���������(6 �������). ������: 1c:4f:fd:e1:88:0a;\n"
        "3. ���������� ������� ����� �����(3 ������). ������: 1c4f.fde1.880a).\n"
        "�������� ��� ����������."
    );
    string arr[]{
        "1C-4F-FD-E1-88-0A", "1c:4f:fd:e1:88:0b", "1c4f.dfe1.880c", "2A-B3-45-C7-9E-0D",
        "2a:b3:45:c7:9e:0e", "2ab3.45c7.9e0f", "3F-8D-A2-B6-C5-10", "3f:8d:a2:b6:c5:11",
        "3f8d.a2b6.c512", "4E-C1-7F-D9-A3-13", "4e:c1:7f:d9:a3:14", "4ec1.7df9.a315",
        "57-2B-8E-F0-D7-16", "57:2b:8e:f0:d7:17", "572b.8ef0.d718", "60-F1-89-2C-B4-19",
        "60:f1:89:2c:b4:1a", "60f1.892c.b41b", "79-3A-02-D5-E8-1C", "79:3a:02:d5:e8:1d",
        "793a.02d5.e81e", "84-5F-DB-C3-F2-1F", "84:5f:db:c3:f2:20", "845f.dbc3.f221",
        "9D-B4-17-6A-A0-22", "9d:b4:17:6a:a0:23", "9db4.176a.a024", "A6-E2-31-8B-D6-25",
        "a6:e2:31:8b:d6:26", "a6e2.318b.d627", "BF-4D-D9-F1-C3-28", "bf:4d:d9:f1:c3:29",
        "bf4d.d9d1.c32a", "C8-F7-45-2D-9A-2B", "cb:f7:45:2d:9a:2c", "c8f7.452d.9a2d",
        "D1-C3-5B-E4-D2-2E", "d1:c3:5b:e4:d2:2f", "d1c3.5be4.d230","EA-9F-65-3C-B8-31", "ea:9f:65:3c:b8:32"
    };
    string arr2[]{
        "1C-4F-FD-E1-88",
    "1C:4F:FD:E1:88:0B:0A",
    "1C4F.FDE1.880C.0D",
    "2A-B3-45-C7-9E",
    "2A:B3:45:C7:9E:0E:0F",
    "2AB3.45C7.9E0F.10",
    "3F-8D-A2-B6-C5",
    "3F:8D:A2:B6:C5:11:12",
    "3F8D.A2B6.C512.13",
    "4E-C1-7F-D9-A3",
    "4E:C1:7F:D9:A3:14:15",
    "4EC1.7FD9.A315.16",
    "57-2B-8E-F0-D7",
    "57:2B:8E:F0:D7:17:18",
    "572B.8EF0.D718.19",
    "60-F1-89-2C-B4",
    "60:F1:89:2C:B4:1A:1B",
    "60F1.892C.B41B.1C",
    "79-3A-02-D5-E8",
    "79:3A:02:D5:E8:1D:1E",
    "793A.02D5.E81E.1F",
    "84-5F-DB-C3-F2",
    "84:5F:DB:C3:F2:20:21",
    "845F.DBC3.F221.22",
    "9D-B4-17-6A-A0",
    "9D:B4:17:6A:A0:23:24",
    "9DB4.176A.A024.25",
    "A6-E2-31-8B-D6",
    "A6:E2:31:8B:D6:26:27",
    "A6E2.318B.D627.28",
    "BF-4D-D9-F1-C3",
    "BF:4D:D9:F1:C3:29:2A",
    "BF4D.D9F1.C32A.2B",
    "C8-F7-45-2D-9A",
    "C8:F7:45:2D:9A:2C:2D",
    "C8F7.452D.9A2D.2E",
    "D1-C3-5B-E4-D2",
    "D1:C3:5B:E4:D2:2F:30",
    "D1C3.5BE4.D230.31",
    "EA-9F-65-3C-B8",
    "EA:9F:65:3C:B8:32:33"
    };
    string str = "";
    int a = 3;
    int b = RandomN(1, a);
    for (int i = 0; i < a; i++) {
        string s = "";
        int r = RandomN(0, 1);
        if (r == 1) {
            s = arr[RandomN(0, 40)];
        }
        else s = ((i + 1 == b) ? arr[RandomN(0, 40)] : arr2[RandomN(0, 40)]);
        str += s + (i + 1 != a ? " " : "");
    }
    DataS(str.c_str(), xCenter, 1);
    regex pattern(R"(([0-9A-F]{2}([-]|)){6}|([0-9a-f]{2}([:]|)){6}|([0-9a-f]{4}([.]|)){3})");
    sregex_iterator begin(str.begin(), str.end(), pattern);
    sregex_iterator end;
    int count = 1;
    for (sregex_iterator it = begin; it != end; ++it) {
        smatch match = *it;
        ResultS(("MAC " + to_string(count) + ": ").c_str(), match.str().c_str(), xCenter, count++);
    }
    SetTestCount(7);
}

void Task3()
{
    CreateTask();
    TaskText(
        "�������� ���������� ��������� ��� �������� ������������ ������ ���� ��������\n"
        "� ������� ��.��.���� ��� ��/��/���� � ������� ��� ����������."
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
        string s = "";
        int r = RandomN(0, 1);
        if (r == 1) {
            int rr = RandomN(0, 1);
            if (rr == 1) s = arr[RandomN(1, 30)] + "." + arr[RandomN(1, 11)] + "." + to_string(RandomN(1900, 2024));
            else s = arr[RandomN(1, 30)] + "/" + arr[RandomN(1, 11)] + "/" + to_string(RandomN(1900, 2024));
        }
        else {
            int rr = RandomN(0, 1);
            if (rr == 1) s = ((i + 1 == b) ? arr[RandomN(1, 30)] + "." + arr[RandomN(1, 11)] + "." + to_string(RandomN(1900, 2024)) : arr[RandomN(0, 99)] + "." + arr[RandomN(0, 99)] + "." + to_string(RandomN(1900, 2024)));
            else s = ((i + 1 == b) ? arr[RandomN(1, 30)] + "/" + arr[RandomN(1, 11)] + "/" + to_string(RandomN(1900, 2024)) : arr[RandomN(0, 99)] + "/" + arr[RandomN(0, 99)] + "/" + to_string(RandomN(1900, 2024)));
        }
        str += s + (i + 1 != a ? " " : "");
    }
    DataS(str.c_str(), xCenter, 1);
    regex pattern(R"((0[1-9]|[12][0-9]|[3][01])[/.](0[1-9]|1[0-2])[/.](19|20)\d\d)");
    sregex_iterator begin(str.begin(), str.end(), pattern);
    sregex_iterator end;
    int count = 1;
    for (sregex_iterator it = begin; it != end; ++it) {
        smatch match = *it;
        ResultS(("Date " + to_string(count) + ": ").c_str(), match.str().c_str(), xCenter, count++);
    }
    SetTestCount(7);
}

void Task4()
{
    CreateTask();
    TaskText(
        "�������� ���������� ��������� ��� �������� ������������ ������ ������\n"
        "���������� � ������� xYYYxx, ��� x � �����, y � �����\n"
        "� ������� ��� ����������."
    );
    string arr[]{
        "�", "�", "�", "�", "�", "�", "�", "�", "�", "�", "�",
        "�", "�", "�", "�", "�", "�", "�", "�", "�", "�", "�",
        "�", "�", "�", "�", "�", "�", "�", "�", "�", "�", "�"
    };
    string arr2[]{
        "�", "�", "�", "�", "�", "�", "�", "�", "�", "�", "�", "�"
    };
    string str = "";
    int a = RandomN(6, 9);
    int b = RandomN(1, a);
    for (int i = 0; i < a; i++) {
        string s = "";
        int r = RandomN(0, 1);
        if (r == 1) s = arr2[RandomN(0,11)] + to_string(RandomN(0, 9)) + to_string(RandomN(0, 9)) + to_string(RandomN(0, 9)) + arr2[RandomN(0, 11)] + arr2[RandomN(0, 11)];
        else s = ((i + 1 == b) ? arr2[RandomN(0, 11)] + to_string(RandomN(0, 9)) + to_string(RandomN(0, 9)) + to_string(RandomN(0, 9)) + arr2[RandomN(0, 11)] + arr2[RandomN(0, 11)] : arr[RandomN(0, 32)] + to_string(RandomN(0, 9)) + to_string(RandomN(0, 9)) + to_string(RandomN(0, 9)) + arr[RandomN(0, 32)] + arr[RandomN(0, 32)]);
        str += s + (i + 1 != a ? " " : "");
    }
    DataS(str.c_str(), xCenter, 1);
    regex pattern(R"([������������]\d\d\d[������������]{2})");
    sregex_iterator begin(str.begin(), str.end(), pattern);
    sregex_iterator end;
    int count = 1;
    for (sregex_iterator it = begin; it != end; ++it) {
        smatch match = *it;
        ResultS(("Number " + to_string(count) + ": ").c_str(), match.str().c_str(), xCenter, count++);
    }
    SetTestCount(7);
}

void Task5()
{
    CreateTask();
    TaskText(
        "�������� ���������� ��������� ��� �������� ������������ ������\n"
        "������ ����������� ����� � ������� ��� ����������."
    );
    string arr[]{
        "user1@gmail.com",
    "user2@mail.ru",
    "user3@yandex.ru",
    "john@outlook.com",
    "jane@yahoo.com",
    "bob@hotmail.com",
    "alice@aol.com",
    "tom@msn.com",
    "sarah@protonmail.com",
    "mike@zoho.com",
    "emily@gmx.com",
    "david@icloud.com",
    "olivia@tutanota.com",
    "jacob@fastmail.com",
    "sophia@posteo.net",
    "william@hey.com",
    "ava@runbox.com",
    "lucas@mailfence.com",
    "isabella@disroot.org",
    "alexander@kolabnow.com",
    "mia@monermail.de",
    "benjamin@cock.li",
    "avery@mailex.org",
    "oliver@mailbox.org",
    "harper@posteo.de",
    "ethan@posteo.es",
    "charlotte@posteo.fr",
    "noah@posteo.it",
    "emma@posteo.pl",
    "liam@posteo.pt",
    "isabella@posteo.se",
    "lucas@posteo.ch",
    "sophia@posteo.at",
    "william@posteo.be",
    "olivia@posteo.nl",
    "jacob@posteo.uk",
    "ava@posteo.cz",
    "noah@posteo.gr",
    "emma@posteo.hu",
    "liam@posteo.ro"
    };
    string arr2[]{
        "user1mail.com",
    "user2@mailru",
    "user3@yandexru",
    "john@outlookcom",
    "janeyahoo.com",
    "@hotmail.com",
    "aliceaol.com",
    "tom@.com",
    "sarah@",
    "mike@com",
    "emilycom",
    "david@iclm",
    "oliviam",
    "jacoil.com",
    "sopheo.net",
    "williamhey.com",
    "avarunbox.com",
    "lucasailfence.com",
    "isabella@disrorg",
    "alexander@kolabnow.",
    "mia@monermai",
    "@cock.li",
    "@mailex.org",
    "@mailbox.org",
    "@posteo.de",
    "ethanposteo.es",
    "charlottsteo.fr",
    "noaht",
    "emma.pl",
    "liam@.pt",
    "isabella@e",
    "lucas@posteo.",
    "sophia@posteo.",
    "william@postee",
    "olivia@posteol",
    "jacob@.uk",
    "avacz",
    "noateo.gr",
    "emmasteo.hu",
    "liamposteo.ro"
    };
    string str = "";
    int a = RandomN(3, 4);
    int b = RandomN(1, a);
    for (int i = 0; i < a; i++) {
        string s = "";
        int r = RandomN(0, 1);
        if (r == 1) s = arr[RandomN(0, 39)];
        else s = ((i + 1 == b) ? arr[RandomN(0, 39)] : arr2[RandomN(0, 39)]);
        str += s + (i + 1 != a ? " " : "");
    }
    DataS(str.c_str(), xCenter, 1);
    regex pattern(R"(\b\w+([\.\w]+)*\w@\w((\.\w)*\w+)*\.\w{2,3}\b)");
    sregex_iterator begin(str.begin(), str.end(), pattern);
    sregex_iterator end;
    int count = 1;
    for (sregex_iterator it = begin; it != end; ++it) {
        smatch match = *it;
        ResultS(("Address " + to_string(count) + ": ").c_str(), match.str().c_str(), xCenter, count++);
    }
    SetTestCount(7);
}

void Task6()
{
    CreateTask();
    TaskText(
        "������� �� ������ ��� �����, ������� �������� �������."
    );
    string arr[] = {
        "I have two apples, and you have five pears.",
        "I have one favorite movie.",
        "I've read two interesting books.",
        "We bought three new phones.",
        "There are four chocolate bars in this box.",
        "There are five beautiful flowers on the table.",
        "I will have six important meetings this week.",
        "I ate seven candies at one time.",
        "Eight are playing on the field football players.",
        "We decided to buy nine new chairs.",
        "There were ten different kinds of cheese in the store.",
        "I rode one kilometer on a bicycle.",
        "There are two beautiful verses in this song.",
        "We spent three hours on the road.",
        "There are four possible solutions to this problem.",
        "I ate five delicious pies.",
        "There are six beautiful houses on this street.",
        "I have seven friends with whom I always communicate.",
        "We spent eight days at sea.",
        "I saw nine beautiful birds.",
        "There are ten big parks in this city.",
        "I drank one glass of water.",
        "There are two tall trees in this forest.",
        "We ate three servings of ice cream.",
        "I read four pages of the book.",
        "I have five favorite songs.",
        "There were six musicians at this concert.",
        "We spent seven hours walking.",
        "There were eight players in this game.",
        "We found nine interesting shells.",
        "I've had ten cups of coffee."
    };
    string str = arr[RandomN(0,29)];
    DataS(str.c_str(), xCenter, 1);
    regex pattern(R"(\b(one|two|three|four|five|six|seven|eight|nine|ten)\b)");
    sregex_iterator begin(str.begin(), str.end(), pattern);
    sregex_iterator end;
    int count = 1;
    for (sregex_iterator it = begin; it != end; ++it) {
        smatch match = *it;
        ResultS(("Number " + to_string(count) + ": ").c_str(), match.str().c_str(), xCenter, count++);
    }
    SetTestCount(7);
}

void Task7()
{
    CreateTask();
    TaskText(
        "������� �� ������ ��� �����, ������� ���������� � \\S�\\s � ������������� ������."
    );
    string arr[] = {
        "A bright new day.",
        "A cozy winter night.",
        "A gentle summer breeze.",
        "A long and winding road.",
        "A silent, starry sky.",
        "A sudden burst of joy.",
        "A whispered secret shared.",
        "A perfect cup of tea.",
        "A mischievous twinkle.",
        "A moment to remember.",
        "A dream come true.",
        "A story to be told.",
        "A heart full of love.",
        "A beautiful sunrise.",
        "A fresh start awaits.",
        "A calm before the storm.",
        "A vibrant splash of color.",
        "A simple act of kindness.",
        "A journey of discovery.",
        "A life full of adventure."
    };
    string str = "";
    int a = RandomN(2, 3);
    for (int i = 0; i < a; i++) {
        str += arr[RandomN(0, 19)] +  (i + 1 != a ? " " : "");
    }
    DataS(str.c_str(), xCenter, 1);
    regex pattern(R"(A\s+([^.]+)\.)");
    sregex_iterator begin(str.begin(), str.end(), pattern);
    sregex_iterator end;
    int count = 1;
    for (sregex_iterator it = begin; it != end; ++it) {
        smatch match = *it;
        ResultS(("Phrase " + to_string(count) + ": ").c_str(), match.str().c_str(), xCenter, count++);
    }
    SetTestCount(7);
}

void Task8()
{
    CreateTask();
    TaskText(
        "������� �� ������ ��� ����, ���������� �������."
    );
    string arr[] = {
        "�������, 15 �������, � ��� ����� �������.","������, 16 �������, �� ������ � ����.",
        "�����, 14 �������, �� ���� �� ��������.","�������, 15 �������, � ��� ����� �������.",
        "������, 16 �������, �� ������ �� ����.","� �����, 14 �������, �� ���� � ������.",
        "�������, 20 ������, �� ����� �������� ���� ��������.","�����, 19 ������, �� ���� � ������.",
        "������, 21 ������, � ��� ����� �������.","�������, 20 ������, �� ����� �������� ���� ��������.",
        "�������, 13 ������ 2023 ����, � ��� ����� ��������.","�����, 12 ������ 2023 ����, �� ���� �� ���������� �����.",
        "������, 14 ������ 2023 ����, �� ������ �� ��������.","�������, 13 ������ 2023 ����, � ��� ����� ��������.",
        "�����, 11 ������ 2023 ����, �� ���� � ����.","�������, 12 ������ 2023 ����, � ��� ����� ��������.",
        "�������, 25 �������, � ��� ����� �������������� ����.","������, 26 �������, �� ����� ��������.",
        "�����, 24 �������, �� �������� ����.","�������, 25 �������, � ��� ����� �������������� ����.",
        "������, 26 �������, �� ������ � �������.","�������, 25 �������, � ��� ����� �������������� ����.",
        "�������, 1 ���, �� ����� ������ � �����.","������, 2 ���, �� ������ �� ������.",
        "�����, 30 ������, �� ���� �� ��������.","�������, 1 ���, �� ����� ������ � �����.",
        "������, 2 ���, �� ������ �� ������.","�������, 1 ���, �� ����� ������ � �����.",
        "�������, 10 �����, �� ����� �������� 8 �����.","������, 11 �����, �� ������ � ����.",
        "�����, 9 �����, �� ���� � ������ � ������.","�������, 10 �����, �� ����� �������� 8 �����.",
        "������, 11 �����, �� ������ � ����.","�������, 10 �����, �� ����� �������� 8 �����.",
        "�������, 14 ��������, � ��� ����� �������� ��������.","�����, 13 ��������, �� ���� �� ���������.",
        "������, 15 ��������, �� ������ �� ����.","�������, 14 ��������, � ��� ����� �������� ��������.",
        "�������, 22 ����, �� ����� �������� ���� ��������.","������, 23 ����, �� ������ �� ����.",
        "�����, 21 ����, �� ���� �� ��������.","�������, 22 ����, �� ����� �������� ���� ��������.",
        "������, 23 ����, �� ������ �� ����.","�������, 22 ����, �� ����� �������� ���� ��������.",
        "�������, 1 �������, �� ������ � ����.","������, 2 �������, �� ����� ������ � �����.",
        "�����, 31 ����, �� ���� �� ����.","�������, 1 �������, �� ������ � ����.",
        "������, 2 �������, �� ����� ������ � �����.","�������, 1 �������, �� ������ � ����.",
        "�������, 12 �������, � ��� ����� �������.","������, 13 �������, �� ������ � ������.",
        "�����, 11 �������, �� ���� �� ��������.","�������, 12 �������, � ��� ����� �������.",
        "������, 13 �������, �� ������ � ������.","�������, 12 �������, � ��� ����� �������.",
        "�������, 1 ������, �� ����� �������� ��������.","������, 2 ������, �� ������ � �����.",
        "�����, 31 �������, �� ���� �� ���������.","�������, 1 ������, �� ����� �������� ��������."
    };
    string str = arr[RandomN(0, 59)];
    DataS(str.c_str(), xCenter, 1);
    regex pattern(R"((?:(?:�������|������|�����|�������|������|�����)|\d{1,2}(?:\s+)?(?:������|�������|�����|������|���|����|����|�������|��������|�������|������|�������)(?:\s+)?(?:\d{4})?(?:\s+)?(?:����|���)?))", regex_constants::icase);
    sregex_iterator begin(str.begin(), str.end(), pattern);
    sregex_iterator end;
    int count = 1;
    for (sregex_iterator it = begin; it != end; ++it) {
        smatch match = *it;
        ResultS(("Date " + to_string(count) + ": ").c_str(), match.str().c_str(), xCenter, count++);
    }
    SetTestCount(7);
}

void Task9()
{
    CreateTask();
    TaskText(
        "������� �� ������ ��� HTML-����, ������� �������� � �������� ���������."
    );
    string arr[] = {
        "<p>��� ����� � ���������.</p>",
        "<h1>��������� ������� ������</h1>",
        "<h2>��������� ������� ������</h2>",
        "<h3>��������� �������� ������</h3>",
        "<h4>��������� ���������� ������</h4>",
        "<h5>��������� ������ ������</h5>",
        "<h6>��������� ������� ������</h6>",
        "<a href=\"https://www.example.com\">������ �� ����</a>",
        "<img src=\"image.jpg\" alt=\"�����������\">",
        "<div class=\"container\">��������� � �������</div>",
        "<ul><li>������� ������</li></ul>",
        "<ol><li>������� ������������� ������</li></ol>",
        "<span style=\"color:red\">����� �� ������</span>",
        "<strong>������ �����</strong>",
        "<em>��������� �����</em>",
        "<br>������� ������</br>",
        "<hr>�������������� �����</hr>",
        "<form><input type=\"text\" placeholder=\"������� �����\"></form>",
        "<button>������</button>",
        "<select><option>����� 1</option><option>����� 2</option></select>",
        "<textarea>��������� �������</textarea>",
        "<video src=\"video.mp4\" controls>�����</video>",
        "<audio src=\"audio.mp3\" controls>�����</audio>",
        "<iframe src=\"https://www.example.com\"></iframe>",
        "<nav><ul><li><a href=\"#\">���������</a></li></ul></nav>",
        "<header>������� ����������</header>",
        "<main>�������� ����������</main>",
        "<footer>������ ����������</footer>",
        "<section>������</section>",
        "<article>������</article>"
    };
    string str = arr[RandomN(0, 29)];
    DataS(str.c_str(), xCenter, 1);
    regex pattern(R"(<([^>]+)>)");
    sregex_iterator begin(str.begin(), str.end(), pattern);
    sregex_iterator end;
    int count = 1;
    for (sregex_iterator it = begin; it != end; ++it) {
        smatch match = *it;
        ResultS(("Tag " + to_string(count) + ": ").c_str(), match.str().c_str(), xCenter, count++);
    }
    SetTestCount(7);
}

void Task10()
{
    CreateTask();
    TaskText(
        "���������, �������� �� ������ �������� IP-�������."
    );
    string str = "";
    int r = RandomN(0, 1);
    if (r == 0) str += to_string(RandomN(0, 255)) + "." + to_string(RandomN(0, 255)) + "." + to_string(RandomN(0, 255)) + "." + to_string(RandomN(0, 255));
    else str += to_string(RandomN(0, 500)) + "." + to_string(RandomN(0, 500)) + "." + to_string(RandomN(0, 500)) + "." + to_string(RandomN(0, 500));
    DataS(str.c_str(), xCenter, 1);
    regex pattern(R"((([0-9]|[1-9][0-9]|1[0-9]{2}|2[0-4][0-9]|25[0-5])\.){3}([0-9]|[1-9][0-9]|1[0-9]{2}|2[0-4][0-9]|25[0-5]))");
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
    case 10:
        Task10(); break;
  }
}

void _stdcall inittaskgroup()
{
  CreateGroup("Reg9Mix", "���������� ���������: ����������� ������",
    "", "qwqfsdf13dfttd", 10, InitTask);
}
