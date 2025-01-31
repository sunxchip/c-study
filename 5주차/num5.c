#include <stdio.h>

int main() {
    int num, num1,num2,num3;
    
    scanf("%d", &num);


    num3 = num /100;

    if ( num < 10000 || num > 99999 || num%100 !=0){ // 5자리 숫자냐, 100으로 나누어 떨어ㅣㅈ지 않냐
        printf("none");
    }
    else if (num3 == 100 || num3 == 101 || num3 == 102) {
        printf("Seoul");
    }
    else if (num3 == 103 || num3 == 104) {
        printf("Busan");
    }
    else if (num3 == 105) {
        printf("Gwangju");
    }

        else {

            printf("none");
    }

    return 0;
    }