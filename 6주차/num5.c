#include <stdio.h>

int main() {
    int a, b = 0, c, d, i, j;

    // 양의 정수 입력
    scanf("%d", &a);

    // 수를 뒤집기
    c = a;
    while (c != 0) {
        b = b * 10 + c % 10;
        c /= 10;
    }

    // 뒤집은 수까지의 소수 출력
    for (c = 2; c <= b; c++) {
        j = 1; // 소수 여부 초기화
        for (d = 2; d * d <= c; d++) {
            if (c % d == 0) {
                j = 0; // 소수가 아님
                break;
            }
        }
        if (j) {
            printf(" %d", c);
        }
    }
    return 0;
}







    // #include <stdio.h>

    // int main(){
    //     int a,b;

    //     scanf("%d",&a);

    //     do {
    //         b = a % 10;
    //         a /= 10;
    //     } while (a != 0);

    //     int i,j,num;
    //     for (i = 1; i<= a; i++){
    //     }
    //         for ( j =1 ; j <= i; j++){
    //         }
    //             if (num>2)
    //             {
    //                 break;
    //             }
    // }
