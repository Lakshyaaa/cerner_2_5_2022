//"cerner_2^5_2022"
//"cerner_2tothe5th_2022"
// Sort an array in an Ascending order.
#include <stdio.h>
void main()
{
         int num[20], i, j, a, n;
         printf("Enter the Number of element in Array = ");
         scanf("%d", &n);
         printf("Enter the elements = \n");
         for (i = 0; i < n; ++i)
         scanf("%d", &num[i]);
         for (i = 0; i < n; ++i)
         {
                  for (j = i + 1; j < n; ++j)
                  {
                           if (num[i] > num[j])
                           {
                                    a = num[i];
                                    num[i] = num[j];
                                    num[j] = a;
                           }
                  }
         }
         printf("Number in Ascending Order = \n");
         for (i = 0; i < n; ++i)
         {
                  printf("%d\n", num[i]);
         }
}