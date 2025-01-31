//정숫값 입력받기 https://blog.naver.com/tipsware/221297544939
#include <stdio.h>

int main(){

    int a;

    while (1)
    {
        printf("숫자 입력: ");
        scanf("%d", &a);

        if (a >= 2 && a <= 9) {
            break;
        }
    }
    printf("%d%d%d%d%d%d\n",a,a,a,a,a,a);
    printf("%d  %d\n",a,a);
    printf("%d  %d\n",a,a);
    printf("%d%d%d%d%d%d\n",a,a,a,a,a,a);

    return 0;
}