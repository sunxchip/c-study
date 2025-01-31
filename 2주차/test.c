#include <stdio.h>

int main(){
    int num1;

    scanf("%d",&num1);

    char num2 = num1+'A';

    printf ("The %dth upper case letter in the English alphabet is %c.",num1,num2);

    return 0;
}