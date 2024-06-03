using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;
using System.Threading.Tasks;

namespace RegexSolver
{
    class Reg9Mix
    {
        //Написать регулярное выражение для проверки корректности записи времени в формате ЧЧ:ММ:СС и вывести все совпадения.
        public void Task1()
        {
            string input = @"11:12:15 25:25:25 10:10:10 1d:2g:3f";
            string pattern = @"([01]\d|2[0-3])(:[0-5]\d){2}";
            Match match = Regex.Match(input, pattern);
            while (match.Success)
            {
                Console.WriteLine(match);
                match = match.NextMatch();
            }
        }

        //Написать регулярное выражение для проверки корректности записи MAC-адреса и вывести все совпадения.
        public void Task2()
        {
            string input = @"1C-4F-FD-E1-88-0A 1c:4f:fd:e1:88:0a 1c4f.fde1.880a dfgh:fghh:dfgf 1-f-g-f-f-g 234.dfg.fdss";
            string pattern = @"([0-9a-fA-F]{2}([:-]|)){6}|([0-9a-fA-F]{4}([.]|)){3}";
            Match match = Regex.Match(input, pattern);
            while (match.Success)
            {
                Console.WriteLine(match);
                match = match.NextMatch();
            }
        }

        //Написать регулярное выражение для проверки корректности записи даты рождения в формате ДД.ММ.ГГГГ или ДД/ММ/ГГГГ и вывести все совпадения.
        public void Task3()
        {
            string input = @"31.10.2002 30/05/2005 3b.5f.2004 123/12/221";
            string pattern = @"(0[1-9]|[12][0-9]|[3][01])[/.](0[1-9]|1[0-2])[/.](19|20)\d\d";
            Match match = Regex.Match(input, pattern);
            while (match.Success)
            {
                Console.WriteLine(match);
                match = match.NextMatch();
            }
        }

        //Написать регулярное выражение для проверки корректности записи номера автомобиля в формате xYYYxx, где x – буква, y – цифра и вывести все совпадения.
        public void Task4()
        {
            string input = @"С065МК";
            string pattern = @"[АВЕКМНОРСТХУ]\d\d\d[АВЕКМНОРСТХУ]{2}";
            Match match = Regex.Match(input, pattern);
            while (match.Success)
            {
                Console.WriteLine(match);
                match = match.NextMatch();
            }
        }

        //Написать регулярное выражение для проверки корректности записи адреса электронной почты и вывести все совпадения.
        public void Task5()
        {
            string input = @"danil4.ber@mail.ru";
            string pattern = @"\b\w+([\.\w]+)*\w@\w((\.\w)*\w+)*\.\w{2,3}\b";
            Match match = Regex.Match(input, pattern);
            while (match.Success)
            {
                Console.WriteLine(match);
                match = match.NextMatch();
            }
        }

        //Извлечь из текста все числа, которые написаны словами.
        public void Task6()
        {
            string input = "У меня есть два яблока, а у тебя пять груш.";
            string pattern = @"\b(один|два|три|четыре|пять|шесть|семь|восемь|девять|десять)\b";
            Match match = Regex.Match(input, pattern, RegexOptions.IgnoreCase);
            while (match.Success)
            {
                Console.WriteLine(match);
                match = match.NextMatch();
            }
        }

        //Извлечь из текста все фразы, которые начинаются с "А" и заканчиваются точкой.
        public void Task7()
        {
            string input = "А это фраза. А это ещё одна фраза. А это третья.";
            string pattern = @"А\s+([^.]+)\.";
            Match match = Regex.Match(input, pattern);
            while (match.Success)
            {
                Console.WriteLine(match);
                match = match.NextMatch();
            }
        }

        //Извлечь из текста все даты, написанные словами (например, "сегодня", "завтра", "15 февраля", "12 марта 2023 года").
        public void Task8()
        {
            string input = "Сегодня, 15 февраля, у нас будет встреча. А завтра, 12 марта 2023 года, мы поедем в отпуск.";
            string pattern = @"(?:(?:сегодня|завтра|вчера)|\d{1,2}(?:\s+)?(?:января|февраля|марта|апреля|мая|июня|июля|августа|сентября|октября|ноября|декабря)(?:\s+)?(?:\d{4})?(?:\s+)?(?:года|год)?)";
            Match match = Regex.Match(input, pattern, RegexOptions.IgnoreCase);
            while (match.Success)
            {
                Console.WriteLine(match);
                match = match.NextMatch();
            }
        }

        //Извлечь из текста все HTML-теги, включая атрибуты и значения атрибутов.
        public void Task9()
        {
            string input = "<p class=\"text\">Это текст в параграфе.</p><a href=\"https://www.example.com\">Ссылка на сайт</a>";
            string pattern = @"<([^>]+)>";
            Match match = Regex.Match(input, pattern);
            while (match.Success)
            {
                Console.WriteLine(match);
                match = match.NextMatch();
            }
        }

        //Проверить, является ли строка валидным IP-адресом.
        public void Task10()
        {
            string input = "192.168.0.1";
            string pattern = @"(([0-9]|[1-9][0-9]|1[0-9]{2}|2[0-4][0-9]|25[0-5])\.){3}([0-9]|[1-9][0-9]|1[0-9]{2}|2[0-4][0-9]|25[0-5])";
            Console.WriteLine(Regex.IsMatch(input, pattern));
        }
    }
}
