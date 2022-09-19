//"cerner_2^5_2022"
//"cerner_2tothe5th_2022"
//Program to Calculate Compound Interest
using System;
namespace CI {
         class CI {
                  static void Main (string[] args) {
                           double Total = 0, IR, years, Annual_Comp, Am;

                           Console.Write ("Enter the Initial Amount =  ");
                           Am = Convert.ToDouble (Console.ReadLine ());
                           Console.Write ("Enter the Rate of Interest = ");
                           IR = Convert.ToDouble (Console.ReadLine ()) / 100;
                           Console.Write ("Enter the Number of Years = ");
                           years = Convert.ToDouble (Console.ReadLine ());
                           Console.Write ("Number of Times the Interest will be Compounded = ");
                           Annual_Comp = Convert.ToDouble (Console.ReadLine ());

                           for (int time = 1; time < years + 1; time++) {
                                    Total = Am * Math.Pow ((1 + IR / Annual_Comp), (Annual_Comp * time));
                                    Console.Write ("Your Total for Year {0} " + "is {1:F0}. \n", time, Total);
                           }
                           Console.ReadLine ();
                  }
         }
}