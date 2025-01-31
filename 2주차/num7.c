#include <stdio.h>

int main(){
    char num;

    scanf("%c",&num);

    printf("%c is the %dth lower case letter in the English alphabet.\n",num,num-'a');

    return 0;

}