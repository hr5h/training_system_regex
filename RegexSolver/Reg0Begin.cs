using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;
using System.Threading.Tasks;

namespace RegexSolver
{
    class Reg0Begin
    {
        //Напишите регулярное выражение, которое будет соответствовать любому числу, выведите эти числа.
        public void Task1()
        {
            string input = "1 12 123 1234";
            string pattern = @"\d+";
            Match match = Regex.Match(input, pattern);
            while (match.Success)
            {
                Console.WriteLine(match);
                match = match.NextMatch();
            }
        }

        //Напишите регулярное выражение, которое будет соответствовать любому cлову, которое начинается с большой буквы, выведите эти слова.
        public void Task2()
        {
            string input = "banan Banan oRange";
            string pattern = @"\b[A-Z][a-z]+\b";
            Match match = Regex.Match(input, pattern);
            while (match.Success)
            {
                Console.WriteLine(match);
                match = match.NextMatch();
            }
        }

        //Напишите регулярное выражение, которое будет соответствовать любому cлову, которое состоит из 5 букв, выведите эти слова.
        public void Task3()
        {
            string input = "banan Banan oRange";
            string pattern = @"\b\w{5}\b";
            Match match = Regex.Match(input, pattern);
            while (match.Success)
            {
                Console.WriteLine(match);
                match = match.NextMatch();
            }
        }

        //Заменить все числа в строке на "число".
        public void Task4()
        {
            string input = "1970 1971 1972 1973 1974 1975 1976 1977 1978 1979 1980 1981 1982 1983 1984 1985 1986 1987 1989";
            string pattern = @"\d+";
            string replacement = "число";
            Match match = Regex.Match(input, pattern);
            while (match.Success)
            {
                input = Regex.Replace(input, pattern, replacement);
                match = match.NextMatch();
            }
            Console.WriteLine(input);
        }

        //Извлечь из строки все даты в формате ДД.ММ.ГГГГ.
        public void Task5()
        {
            string input = "01.02.2002 01/02.2002";
            string pattern = @"\d{2}\.\d{2}\.\d{4}";
            Match match = Regex.Match(input, pattern);
            while (match.Success)
            {
                Console.WriteLine(match);
                match = match.NextMatch();
            }
        }

        //Заменить все пробелы в строке на подчеркивания.
        public void Task6()
        {
            string input = "1970 1971 1972 1973 1974 1975 1976 1977 1978 1979 1980 1981 1982 1983 1984 1985 1986 1987 1989";
            string pattern = @"\s";
            string replacement = "_";
            Match match = Regex.Match(input, pattern);
            while (match.Success)
            {
                input = Regex.Replace(input, pattern, replacement);
                match = match.NextMatch();
            }
            Console.WriteLine(input);
        }

        //Напишите регулряное выражение, которое поможет извлечь из строки все хэштеги.
        public void Task7()
        {
            string input = "#решу_задачу не_решу_задачу ##";
            string pattern = @"#\w+";
            Match match = Regex.Match(input, pattern);
            while (match.Success)
            {
                Console.WriteLine(match);
                match = match.NextMatch();
            }
        }

        //Проверить, содержит ли строка хотя бы один пробел.
        public void Task8()
        {
            string input = "#решу_задачу не_решу_задачу ##";
            string pattern = @"\s+";
            Console.WriteLine(Regex.IsMatch(input, pattern));
        }
    }
}
