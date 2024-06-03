using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;
using System.Threading.Tasks;

namespace RegexSolver
{
    class Reg5ZLen
    {
        //Найдите число, которое находится в начале строки.
        public void Task1()
        {
            string input = @"123 234 567";
            string pattern = @"^\d+";
            Match match = Regex.Match(input, pattern);
            while (match.Success)
            {
                Console.WriteLine(match);
                match = match.NextMatch();
            }
        }

        //Найдите число, которое находится в конце строки.
        public void Task2()
        {
            string input = @"123 234 567";
            string pattern = @"\d+$";
            Match match = Regex.Match(input, pattern);
            while (match.Success)
            {
                Console.WriteLine(match);
                match = match.NextMatch();
            }
        }

        //Найти первое и последнее слово в строке:
        public void Task3()
        {
            string input = @"The quick brown fox jumps over the lazy dog";
            string pattern = @"^[A-z]+|[a-z]+$";
            Match match = Regex.Match(input, pattern);
            while (match.Success)
            {
                Console.WriteLine(match);
                match = match.NextMatch();
            }
        }

        //Предположим, мы пишем подсветку синтаксиса и хотим выделить слово var, но только тогда, когда оно появляется само по себе (не касаясь других символов слова). Найдите все такие вхождения слова var в строке и выведите их позиции:
        public void Task4()
        {
            string input = @"var varx _var (var j) barvarcar *var var-> {var}";
            string pattern = @"\bvar\b";
            MatchCollection matches = Regex.Matches(input, pattern);
            foreach (Match match in matches)
                Console.WriteLine("'{0}' занимает позицию {1}.", match.Value, match.Index);
        }

        //Напишите регулярное выражение, которое находит все вхождения слова "hello" в тексте, но не находит вхождения, если слово "hello" является частью другого слова (например, "hello" в "hello_world" не должно быть найдено) и выведите их позиции.
        public void Task5()
        {
            string input = @"hell hello_world helloworld hello hllo world";
            string pattern = @"\bhello\b";
            MatchCollection matches = Regex.Matches(input, pattern);
            foreach (Match match in matches)
                Console.WriteLine("'{0}' занимает позицию {1}.", match.Value, match.Index);
        }
    }
}
