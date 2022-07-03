using System;
using System.Globalization;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PROBLEMA_DARDO {
    internal class Program {
        static void Main(string[] args) {

            CultureInfo CI = CultureInfo.InvariantCulture;

            double D1, D2, D3, maiorD;

            Console.WriteLine("Digite as tres distancias: ");
            D1 = double.Parse(Console.ReadLine(), CI);
            D2 = double.Parse(Console.ReadLine(), CI);
            D3 = double.Parse(Console.ReadLine(), CI);

            if (D1 > D2 && D1 > D3) {
                maiorD = D1;
            }
            else if (D2 > D3) {
                maiorD = D2;
            }
            else {
                maiorD = D3;
            }

            Console.WriteLine("MAIOR DISTANCIA = " + maiorD.ToString("F2", CI));

        }
    }
}
