#Addition of two numbers.

#include <stdio.h>

int a=0, b=0, sum=0, sum1=0,carry;
int main()
{
    printf("Enter the numbers\n");
    scanf("%d %d",&a, &b);
    sum= a + b;
   while(b!=0)
   {
    carry= a&b;
    a= a ^ b;
    b=carry<<1;
   }
    printf("Sum = %d\n",sum);
    printf("BitwISE sum =%d\n",a);

    return 0;
}
