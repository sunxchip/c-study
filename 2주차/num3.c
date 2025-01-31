#include <stdio.h>

int main(){
    int fnum1;

    printf("정수입력: ");
    scanf("%d", &fnum1);

    char fnum2 = fnum1;

    printf("(int->int) %d\n",fnum1);
    printf("(int->char->int) %d\n",fnum2);

    return 0;

}