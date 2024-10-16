#include<stdio.h>
int main()
{
    int a;
    float b;
    printf("Enter the integer value:");
    scanf("%d",&a);
    printf("Enter the float value:");
    scanf("%f",&b);
    printf("The integer value after swapping is %f\n",(float)a);
    printf("The float value after swapping is %d\n",(int)b);
}