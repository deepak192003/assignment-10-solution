// 3. Write a function to check whether a given number is even or odd. Return 1 if the 
// number is even, otherwise return 0. (TSRS)
#include<stdio.h>
int main()
{
   int num,result;
   printf("Enter a number: ");
   scanf("%d",&num);
   result=checkevenodd(num);
   printf("%d",result);
}
int checkevenodd(int num)
{
    if(num%2==0)
    return 1;
    if(num%2==1)
    return 0;
}