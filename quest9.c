// Write a function to check whether a given number contains a given digit or not. 
// (TSRS)
#include<stdio.h>
int main()
{
    char ch;
    
    printf("Enter a digit: ");
    scanf("%c",&ch);
    checkdigit(ch);

}
void checkdigit(char ch)
{
    if(ch>='0' && ch<='9')
   {
    printf("Yes it is digit");
   }
    else
    {
        printf("No it is not digit");
    }

}