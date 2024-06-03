using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;
using System.Threading.Tasks;

namespace RegexSolver
{
    class Reg3Quant
    {
        //Найдите все английские слова в строке:
        public void Task1()
        {
            string input = @"3 plus 3 is six but 4 plus three is 7";
            string pattern = @"[a-z]+";
            Match match = Regex.Match(input, pattern);
            while (match.Success)
            {
                Console.WriteLine(match);
                match = match.NextMatch();
            }
        }

        //Найдите все обозначения размеров файлов в строке ниже. Размеры файлов будут состоять из числа (с десятичной точкой или без нее), за которым следуют KB, MB, GB или TB:
        public void Task2()
        {
            string input = @"11TB 13 14.4MB 22HB 9.9GB TB 0KB";
            string pattern = @"\d+\.*\d*[KMGT]B";
            Match match = Regex.Match(input, pattern);
            while (match.Success)
            {
                Console.WriteLine(match);
                match = match.NextMatch();
            }
        }

        //Найти фамилии содержащие 4 или более символов и выведите их количество:
        public void Task3()
        {
            string input = @"Kim Jobs Xu Cloyd Mohr Ngo Rock";
            string pattern = @"[A-Z][a-z]{3,}";
            Match match = Regex.Match(input, pattern);
            int count = 0;
            while (match.Success)
            {
                count++;
                Console.WriteLine(match);
                match = match.NextMatch();
            }
            Console.WriteLine($"count = {count}");
        }

        //В некоторых языках программирования (например, Java) за некоторыми целыми числами и числами с плавающей запятой (точкой) могут следовать l / L и f / F, чтобы указать, что они должны рассматриваться как long / float (соответственно), а не как обычные int / double. 
        //Найдите все действительные "long" числа в строке ниже и выведите их позиции:
        public void Task4()
        {
            string input = @"13L long 2l 19f L lL 0L";
            string pattern = @"\d+[lL]";
            MatchCollection matches = Regex.Matches(input, pattern);
            foreach (Match match in matches)
                Console.WriteLine("'{0}' занимает позицию {1}.", match.Value, match.Index);
        }

        //Номера страхового индивидуального лицевого счёта(СНИЛС) представляют собой 11-значные номера в формате ХХХ-ХХХ-ХХХ YY, где каждый X, Y может быть любой цифрой [0-9]. Используя один или несколько классов символов, напишите регулярное выражение, чтобы найти правильно отформатированные номера СНИЛС в списке ниже:
        public void Task5()
        {
            string input = @"113-25=1902 182-820-192 34 H23-_3-9982 1I1-O0-E38B";
            string pattern = @"\d{3}-\d{3}-\d{3} \d{2}";
            Match match = Regex.Match(input, pattern);
            while (match.Success)
            {
                Console.WriteLine(match);
                match = match.NextMatch();
            }
        }

        //Предположим, что система проверки надежности пароля на веб-сайте требует, чтобы пароли пользователей составляли от 6 до 12 символов, а также не содержали пробелов. Каждый пароль содержится в скобках () для удобства сопоставления. Напишите регулярное выражение, помечающее неверные пароли в строке ниже:
        public void Task6()
        {
            string input = @"(12345) (my password) (Xanadu.2112) (su_do) (OfSalesmen!)";
            string pattern = @"\([^()]{0,5}\)|\([^()]+\s[^()]*\)";
            Match match = Regex.Match(input, pattern);
            while (match.Success)
            {
                Console.WriteLine(match);
                match = match.NextMatch();
            }
        }

        //Напишите регулярное выражение, которое будет соответствовать любому числу, содержащему от 3 до 7 цифр, выведите эти числа.
        public void Task7()
        {
            string input = @"1 123 1234 12345 1234567 12345678";
            string pattern = @"\b\d{3,7}\b";
            Match match = Regex.Match(input, pattern);
            while (match.Success)
            {
                Console.WriteLine(match);
                match = match.NextMatch();
            }
        }

        //С помощью регулярного выражения замените все последовательности из 3 или более пробелов на один пробел.
        public void Task8()
        {
            string input = "1970   1987  1989    f";
            string pattern = @"\s{3,}";
            string replacement = " ";
            Match match = Regex.Match(input, pattern);
            while (match.Success)
            {
                input = Regex.Replace(input, pattern, replacement);
                match = match.NextMatch();
            }
            Console.WriteLine(input);
        }

        //Напишите регулярное выражение, которое будет соответствовать строке, содержащей от 1 до 3 символов подчёркивания.
        public void Task9()
        {
            string input = @"___";
            string pattern = @"\b__?_?\b";
            Console.WriteLine(Regex.IsMatch(input, pattern));
        }
    }
}
