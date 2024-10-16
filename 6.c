#include<stdio.h>
int main(){
    int sum=0;
    float avg;
    printf("Enter the 5 Numbers: ");
    for(int i=0;i<5;i++){
        int n;
        scanf("%d",&n);
        sum+=n;
        avg+=n/5.0;
    }
    printf("The sum of the numbers is: %d",sum);
    printf("\nThe average of the numbers is: %f",avg);
    return 0;
}