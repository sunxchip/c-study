#include <stdio.h>

int main(){
    int a;
    int b;

    printf("생일의 월과 일을 입력: ");
    
    scanf("%d %d",&a,&b);
    printf("My birthday is month %d date %d.",a,b);

    return 0;
}