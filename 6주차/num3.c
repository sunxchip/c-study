#include <stdio.h>

int main (){
    int a,i,b=0,c;

    scanf("%d",&a);

    for ( i =1; i <= a; i++){
        if( a % i == 0) b+=i; //a에서 i를 나누었을때 나머지가 0이면 i는 a의 약수             
    }


    c = (( b/10 + b%10 *10)); // 숫자 뒤집기
    printf("%d\n",c); 

    return 0;
}