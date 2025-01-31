#include <stdio.h>

int main(){
    int a;
    int b;

    printf("숫자입력: ");
    scanf("%d",&a);
    printf("숫자입력: ");
    scanf("%d",&b);

    int sum = a + b;

    printf("sum: %d\n",sum);

    return 0;

}