#include <stdio.h>

int main(){
    int a ;

    scanf("%d",&a);

    int b = (a/1000)+(((a%1000)/100)*10)+(((a% 100)/10)*100)+((a%10)*1000);

    int c = a - b ;

    printf("%d", (c >= 0)? c: -c); // c >=0 즉, 음수 일때 c 출력 , 거짓일때 -c 반환

    return 0;


}