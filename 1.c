#include <stdio.h>
int count=0,local=10;
int counting(){
    count++;
    return 0;
}
int main() {
    int a=100, b=200;
    counting();
    counting();
    counting();
    counting();
    counting();
    printf("%d times function is called",count);
    printf("a+b= %d",a+b);
    return 0;
}