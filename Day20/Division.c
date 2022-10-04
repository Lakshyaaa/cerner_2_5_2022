//"cerner_2^5_2022" "cerner_2tothe5th_2022"
// DIvision of two number.

#include <stdio.h>
int main()
{
         float num1, num2, div;
         printf("\tEnter Two Numbers\n");
         printf("---------------------------\n");
         printf("Enter First Number  : ");
         scanf("%d", &num1);
         printf("\nEnter Second Number : ");
         scanf("%d", &num2);
         div = num1 / num2;
         printf("\nDivision of %f & %f is = %f", num1, num2, div);
         return 0;
}