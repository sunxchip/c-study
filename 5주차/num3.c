#include <stdio.h>

int main(){ // 26개의 알파벳이 반복 , 문자에 숫자 입력시 숫자만큼 앞에 있는 문자 출력
    char a,b;
    int num , leg = 'Z' -'A'+1; //숫자와 문자를 담을 변수 생성 , 문자 Z-A , +1 90+65 - 1 = +1 //65-90=25차이나고 ,+1

    scanf("%c%d",&a,&num);

    if ( a >= 'A' && a <= 'Z') {     // 입력 받은 문자 a가 'A' 보다 클 시, 입력 받은 문자가 'Z보다 클 시     
        b = ( a- 'A'+num) % leg +'A'; // (
        printf("%c",b);
    }
    else if ( a >= 'a' && a <= 'z') { 
        b = (a - 'a'+ num ) %leg +'a';
    }

    else {
        printf("%c",a);
    }
    
    
    return 0;
}