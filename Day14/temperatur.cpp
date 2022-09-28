//"cerner_2^5_2022"
//"cerner_2tothe5th_2022"

// converting fahreneheit to celsius

#include <iostream>
using namespace std;

int main()
{
         float f, c;
         cout << "Please enter temperature in fahrenheit\n";
         cin >> f;
         c = 5 * (f - 32) / 9;
         cout << f << " Fahrenheit is equal to = " << c << " Centigrade";

         return 0;
}