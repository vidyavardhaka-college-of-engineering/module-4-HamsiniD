//Program in C to add two numbers using pointers.
//Input:5 6                                                                                   
// Output: Sum=11
#include <stdio.h>
int main()
{
   int fno, sno, *ptr, *qtr, sum;
   printf(" Input two numbers: ");
   scanf("%d%d", &fno,&sno);
   ptr = &fno;
   qtr = &sno;
  //Calculate sum=*ptr+*qtr;
   printf(" Sum=%d",sum);
    return 0;
}
