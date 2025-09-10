//Write a program to check if a number is prime.
#include<stdio.h>
int main()
{
   int num1,n=0;

    printf("ENTER NUMBER \n");
    scanf("%d",&num1);
    for (int i=1 ; i<=num1 ; i++)
    {
        if (num1%2==0)
            n=n+1;
    }
    if (n==2)
        printf("NUMBER IS PRIME");
    else
        printf("NOT A PRIME  NUMBER");
    return 0;
}