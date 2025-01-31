#include <stdio.h> // 조건연산자 사용

int main(){
    int a;
    int b;
    int c;
    int num1,num2,num3;

    scanf("%d%d%d",&a,&b,&c);

    num1 = a / 100;
    num2 = b / 100;
    num3 = c / 100;

    (num1 == num2 && num2 == num3) ? printf("T"): 
    (((num1==num2)&&(num1!=num3)) || ((num1 == num3)&&(num1 != num2 ))|| ((num2!=num3)&&(num1==num3)))? printf("D"):  
    (num1!= num2 && num2 != num3 && num1!=num3)? printf("S"): printf("j"); // if문 1개


    return 0;

}