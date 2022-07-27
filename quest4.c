// Write a function to print first N natural numbers (TSRN)
#include<stdio.h>
void firsN(int);
int main()
{
    int num;
    printf("Enter last limit of natural number: ");
    scanf("%d",&num);
    firstN(num);
}
void firstN(num)
{
    int i;
    for(i=1;i<=num;i++)
    {
        printf("%d",i);
    }
}