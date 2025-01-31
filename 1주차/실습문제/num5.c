#include <stdio.h>

int main(){
    int m;
    int d;

    printf("생일의 월 입력: ");
    scanf("%d",&m);

    printf("생일의 일 입력: ");
    scanf("%d",&d);
    printf("My birthday is month %d date %d.",m,d);

    return 0;
}