#include<stdio.h>
int main()
{
    const float pi=3.14159;
    float r,ar;
    printf("Enter the radius of the circle: \n");
    scanf("%f",&r);
    ar=pi*r*r;
    printf("The area of the circle is: %f",ar);
    return 0;
}