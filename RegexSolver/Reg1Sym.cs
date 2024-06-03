using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;
using System.Threading.Tasks;

namespace RegexSolver
{
    class Reg1Sym
    {
        //Найти названия всех животных из трёх букв(bat, cat, rat) в следующей строке:
        public void Task1()
        {
            string input = "A bat, a cat, and a rat walked into a bar.";
            string pattern = "[bcr]at";
            Match match = Regex.Match(input, pattern);
            while (match.Success)
            {
                Console.WriteLine(match);
                match = match.NextMatch();
            }
            /*
            bat
            cat
            rat
            */
        }

        //Шестнадцатеричные числа могут содержать цифры 0-9, а также буквы A-F.При использовании их для указания цветов, шестнадцатеричные коды могут содержать не более трех символов.Создайте регулярное выражение, чтобы найти действительные шестнадцатеричные коды и выведите их позиции в строке:
        public void Task2()
        {
            string input = "1H8 4E2 8FF 0P1 T8B 776 42B G12";
            string pattern = "[0-9A-F]{3}";
            MatchCollection matches = Regex.Matches(input, pattern);
            foreach (Match match in matches)
                Console.WriteLine("'{0}' занимает позицию {1}", match.Value, match.Index);
            /*
            '4E2' занимает позицию 4.
            '8FF' занимает позицию 8.
            '776' занимает позицию 20.
            '42B' занимает позицию 24.
            */
        }

        //Используя диапазоны символов, создайте регулярное выражение, которое будет выбирать только согласные и выведите их количество строке:
        public void Task3()
        {
            string input = "AThe walls in the mall are totally, totally tall.";
            string pattern = "[^aeiou,. ]";
            Match match = Regex.Match(input, pattern, RegexOptions.IgnoreCase);
            int count = 0;
            while (match.Success)
            {
                count++;
                match = match.NextMatch();
            }
            Console.WriteLine($"count = {count}");
            //count = 26
        }

        //Используйте знак отрицания ^ в квадратных скобках, чтобы сопоставить все слова ниже, которые не заканчиваются на y и выведите их в формате:"1) 'слово';":
        public void Task4()
        {
            string input = "day dog hog hay bog bay ray rub";
            string pattern = "[a-z][a-z][^y ]";
            Match match = Regex.Match(input, pattern);
            int count = 0;
            while (match.Success)
            {
                count++;
                Console.WriteLine($"{count}) {match};");
                match = match.NextMatch();
            }
            /*
            1) dog;
            2) hog;
            3) bog;
            4) rub;
            */
        }

        //Напишите регулярное выражение, используя диапазон и знак отрицания ^ в квадратных скобках, чтобы найти все года между 1977 и 1982 (включительно) и замените их на 2024, выведите измененную строку:
        public void Task5()
        {
            string input = "1970 1971 1972 1973 1974 1975 1976 1977 1978 1979 1980 1981 1982 1983 1984 1985 1986 1987 1989";
            string pattern = "19[78][^3-6]";
            string replacement = "2024";
            Match match = Regex.Match(input, pattern);
            while (match.Success)
            {
                input = Regex.Replace(input, pattern, replacement);
                match = match.NextMatch();
            }
            Console.WriteLine(input);
            //1975 1976 2024 2024 2024 2024 2024 2024 1983 1984
        }

        //Напишите регулярное выражение, которое будет соответствовать любому слову, содержащему хотя бы одну цифру, выведите эти слова.
        public void Task6()
        {
            string input = "as34fdf dfd3fddfd dfdsfg";
            string pattern = @"\w*\d\w*";
            Match match = Regex.Match(input, pattern);
            while (match.Success)
            {
                Console.WriteLine(match);
                match = match.NextMatch();
            }
        }

        //Напишите регулярное выражение, которое будет соответствовать любому слову, содержащему хотя бы одну букву в верхнем регистре, выведите эти слова.
        public void Task7()
        {
            string input = "aAs34fdf dfd3fdDDdfd dfdsfg";
            string pattern = @"\w*[A-Z]\w*";
            Match match = Regex.Match(input, pattern);
            while (match.Success)
            {
                Console.WriteLine(match);
                match = match.NextMatch();
            }
        }
    }
}
