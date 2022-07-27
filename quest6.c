#include<stdio.h>
int factorial(int);
int main()
{
    int num,fact;
    printf("Enter a number: ");
    scanf("%d",&num);
    fact=factorial(num);
    printf("Factorial of %d is %d",num,fact);
}
int factorial(int num)
{
    int i,f=1;
   for(i=1;i<=num;i++)
   {
        f=i*f;
   }
    return f;
}