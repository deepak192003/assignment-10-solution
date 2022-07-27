// Write a function to calculate simple interest. (TSRS)
#include<stdio.h>
float si(int,int,int);
int main()
{
    int principle,rate,time;
    float simpleinterest;
    printf("Enter Principle amt, rate, time: ");
    scanf("%d%d%d",&principle,&rate,&time);
    simpleinterest=si(principle,rate,time);
    printf("Value is %f",simpleinterest);
}
float si(int principle,int rate,int time)
{
    float sim_int;
    sim_int=(principle*rate*time)/100;
    return sim_int;
}