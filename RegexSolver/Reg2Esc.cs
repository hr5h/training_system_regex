using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;
using System.Threading.Tasks;

namespace RegexSolver
{
    class Reg2Esc
    {
        //Есть ли в строке квадратные скобки '[]':
        public void Task1()
        {
            string input = @"You can't match [] using regex! You will regret this!";
            string pattern = @"\[\]";
            Console.WriteLine(Regex.IsMatch(input, pattern));
        }

        //Найдите все вхождения обратного слэша '\' в строке, замените на слэш '/' и выведите измененную строку:
        public void Task2()
        {
            string input = @"C:\Users\Dan\Pictures\Cats";
            string pattern = @"\\";
            string replacement = "/";
            Match match = Regex.Match(input, pattern);
            while (match.Success)
            {
                input = Regex.Replace(input, pattern, replacement);
                match = match.NextMatch();
            }
            Console.WriteLine(input);
        }

        //Найти все символы табуляции (\t) в строке и выведите их количество.
        public void Task3()
        {
            string input = @"\t df\t dfdgfg \t \tdgf fgt\tgfgf";
            string pattern = @"\\t";
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

        //Написать regex для поиска escape-последовательностей(\r, \t, \n) и выведите их позиции:
        public void Task4()
        {
            string input = @"`\r`, `\t`, and `\n` are all regex escape sequences.";
            string pattern = @"\\[ntr]";
            MatchCollection matches = Regex.Matches(input, pattern);
            foreach (Match match in matches)
                Console.WriteLine("'{0}' занимает позицию {1}.", match.Value, match.Index);
            /*
            '\r' занимает позицию 1.
            '\t' занимает позицию 7.
            '\n' занимает позицию 17.
            */
        }

        //Найдите слова содержащие символ табуляции (\t) внутри слова, а не в начале или конце и выведите их.
        public void Task5()
        {
            string input = @"\t df\t dfdgfg \t \tdgf fgt\tgfgf";
            string pattern = @"\w+\\t\w+";
            Match match = Regex.Match(input, pattern);
            while (match.Success)
            {
                Console.WriteLine(match);
                match = match.NextMatch();
            }
        }
    }
}
