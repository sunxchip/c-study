#include <stdio.h>

int main(){
    int a, num1,num2,num3;

    scanf("%d",&a);

    num1 = a/100;
    num2 =a%100 /10;
    num3 = a%100 % 10;

    (num1 < num2) && ( num1 < num3) ? printf("%d",num1): (num2<num1)&&(num2<num3)? printf("%d",num2): 
    (num3<num1)&&(num3<num2)? printf("%d",num3): printf("");

    return 0;

    




}