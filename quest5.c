// Write a function to print first N odd natural numbers(TSRN).
#include<stdio.h>
void firstNodd(int);
int main()
{
    int num;
    printf("Enter natural number: ");
    scanf("%d",&num);
    firstNodd(num);
    return 0;
}
void firstNodd(int num)
{
    int i;
    for(i=1;i<=num;i++)
    {
       printf("%d",2*i-1);
    }
}