#include<stdio.h>
int main()
{
    int num,i,result;
    printf("Enter a number ");
    scanf("%d",&num);
   for ( i = 1; i <=num; i++)
   {
        while (num==1)
        {
           if(num%i==0)
        {
            printf("%d",i);
        }  
        } 
   }
   
    
    
    result=i;
    printf("%d",result);
}