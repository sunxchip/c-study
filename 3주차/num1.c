#include <stdio.h>

int main(){
    int num;

    scanf("%x",&num); //16진수로 입력 받기
    printf("decimal number = %d\n",num); //10진수 출력
    printf("octal number = %o\n",num); // 8진수 출력

    return 0;
}