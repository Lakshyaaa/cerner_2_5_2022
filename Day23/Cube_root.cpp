//"cerner_2^5_2022" "cerner_2tothe5th_2022"
//Find the cube root of given number.

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
         double x;
         cout<<"Enter the Value = ";
         cin>>x;

         double result;
         result = cbrt(x);
         cout << "Cube root of " << x << " is " << result << endl;

         return 0;
}