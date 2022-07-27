#include<stdio.h>
float circlearea(float);
int  main()
{
    float radius;
    float area;
    printf("Enter radius of circle: ");
    scanf("%f",&radius);
    area=circlearea(radius);
    printf("Area of circle is %f",area);    
    return 0;
}
float circlearea(float radius)
{
    float areacircle;
    areacircle=3.14*radius*radius;
    return areacircle;
}