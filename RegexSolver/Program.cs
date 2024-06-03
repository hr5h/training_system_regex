using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace RegexSolver
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Reg9Mix reg = new Reg9Mix();
            reg.Task10();

            Console.ReadKey();
        }
    }
}

/* Reg1Sym:
 * 1 +
 * 2 +
 * 3 +
 * 4 +
 * 5 +
 * 
 * Reg2Esc:
 * 1 +
 * 2 +
 * 3 +
 * 
 * Reg3Quanty:
 * 1 +
 * 2 +
 * 3 +
 * 4 +
 * 5 +
 * 6 +
 * 
 * Reg4Group:
 * 1 +
 * 2 +
 * 
 * Reg5ZLen:
 * 1 +
 * 2 +
 */
