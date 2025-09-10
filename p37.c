//Write a program to find the LCM of two numbers.
#include<stdio.h>
int main()
{
   int a,b;
    printf("ENTER NUMBER 1\n");
    scanf("%d",&a);
    printf("ENTER NUMBER 2\n");
    scanf("%d",&b);
    int c=b;
    int d=a;
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    printf("The LCM  of %d and %d is: %d\n", c,d, (c*d)/a);
        return 0;
}