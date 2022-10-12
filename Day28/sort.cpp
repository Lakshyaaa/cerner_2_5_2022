//"cerner_2^5_2022"
//"cerner_2tothe5th_2022"
// compute size of an array parameter in a function
#include <iostream>
using namespace std;

void findSize(int arr[])
{
         cout << sizeof(arr) << endl;
}

int main()
{
         int a[10];
         cout << sizeof(a) << " ";
         findSize(a);
         return 0;
}
