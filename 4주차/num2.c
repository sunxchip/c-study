#include <stdio.h>

int main(){
    int a;

    scanf("%d",&a);

    if ((a%4 == 0 && a% 100!=0)||a%400==0) {  //4로 나누어 떨어지는 수이지만 100으로 나누어 떨어지지 않는 수 거나 400으로 나누어 지는 수
        printf("L");
    }

    else{
        printf("C");
    }

    return 0;
}