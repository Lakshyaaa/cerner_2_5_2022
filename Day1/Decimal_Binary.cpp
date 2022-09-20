//"cerner_2^5_2022"
//"cerner_2tothe5th_2022"
// Convert Decimal Number to Binary Number.

#include <iostream>
using namespace std;
int main()
{
         int A[10];
         int Num;
         int i;
         cout << "Enter the Decimal Number:  ";
         cin >> Num;

         for (i = 0; Num > 0; i++)
         {
                  A[i] = Num % 2;
                  Num = Num / 2;
         }

         cout << "Binary of the given Decimal Number:  ";

         for (i = i - 1; i >= 0; i--)
         {
                  cout << A[i];
         }
         return 0;
}