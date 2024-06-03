using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;
using System.Threading.Tasks;

namespace RegexSolver
{
    class Reg4Group
    {
        //Поместить в первую группу слова, начинающиеся с заглавной буквы, а во вторую со строчной и вывести их количество в строке:
        public void Task1()
        {
            string input = @"The current President of Bolivia is Evo Morales.";
            string pattern = @"(?<1>[A-Z][a-z]*)|(?<2>[a-z]+)";
            Match match = Regex.Match(input, pattern);
            int count1 = 0;
            int count2 = 0;
            while (match.Success)
            {
                Group group1 = match.Groups["1"];
                Group group2 = match.Groups["2"];
                if (group1.Success) count1++;
                if (group2.Success) count2++;
                match = match.NextMatch();
            }
            Console.WriteLine($"count1 = {count1}, count2 = {count2}");
            //count1 = 5, count2 = 3
        }

        //Входная строка содержит в себе сотовый телефон в формате +7XXXXXXXXXX и Имя. Нужно выделить из строки все сгруппированные контакты с тегами <tel> - номер телефона, <name> - Имя и вывести их в формате:"Tel: +7XXXXXXXXXX Name: Имя":
        public void Task2()
        {
            string input = "+79173256465 Алексей, +79256477392 Иван, +79023747551 Кирилл.";
            string pattern = @"(?<tel>\+7\d{10})\s(?<name>[A-Z|А-Я|a-z|а-я]+)";
            Regex regex = new Regex(pattern);
            Match match = regex.Match(input);
            while (match.Success)
            {
                Group groupTel = match.Groups["tel"];
                Group groupName = match.Groups["name"];
                Console.WriteLine("Tel: " + groupTel + " Name: " + groupName);
                match = match.NextMatch();
            }
            //Tel: +79173256465 Name: Алексей
            //Tel: +79256477392 Name: Иван
            //Tel: +79023747551 Name: Кирилл
        }

        //Заменить все слова, которые содержат 2 или более одинаковых букв подряд, на "слово".
        public void Task3()
        {
            string input = "Банан, аррр, коооот, мисс";
            string pattern = @"\b\w*(\w)\1\w*\b";
            string replacement = "слово";
            Match match = Regex.Match(input, pattern);
            while (match.Success)
            {
                input = Regex.Replace(input, pattern, replacement);
                match = match.NextMatch();
            }
            Console.WriteLine(input);
        }
    }
}
