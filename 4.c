#include<stdio.h>
enum{monday,tuesday,wednesday,thursday,friday,saturday,sunday};
int main(){
    int n;
    printf("Enter the day number: \n");
    scanf("%d",&n);
    switch(n){
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;  
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
        default:
            printf("Invalid day number");
    }
    return 0;
}