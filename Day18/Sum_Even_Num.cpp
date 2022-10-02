//"cerner_2^5_2022" "cerner_2tothe5th_2022"

// Find the sum of all even number from 1 to N
#include <iostream>
using namespace std;

int main()
{
         int N;
         cout << "Enter the number: ";
         cin >> N;

         int i = 2, sum = 0;

         while (i <= N)
         {
                  if (i % 2 == 0)
                           sum = sum + i;
                  i = i + 1;
         }
         cout << sum;
         return 0;
}