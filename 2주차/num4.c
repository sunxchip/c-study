#include <stdio.h>

int main(){
    int a;

    printf("정수입력: ");
    scanf("%d",&a);

    unsigned char b = a;

    printf("(int->int) %d\n",a);
    printf("(int)->(unsigned char->int) %d\n",b);

    return 0;
}