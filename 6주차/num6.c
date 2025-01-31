#include <stdio.h>

int main() {
    int a, b, c;
    int count = 0;
    int median1 = 0, median2 = 0, median3 = 0, median4 = 0, median5 = 0; // 최대 5개의 중앙값 저장

    while (1) {

        if (scanf("%d %d %d", &a, &b, &c) != 3) {
            break;
        }

        if (a <= 0 || b <= 0 || c <= 0) {
            break;
        }


        int median;
        if ((a > b && a < c) || (a > c && a < b)) {
            median = a;
        } else if ((b > a && b < c) || (b > c && b < a)) {
            median = b;
        } else {
            median = c;
        }

        count++;
        if (count == 1) median1 = median;
        else if (count == 2) median2 = median;
        else if (count == 3) median3 = median;
        else if (count == 4) median4 = median;
        else if (count == 5) median5 = median;

        
        if (count >= 5) {
            break;
        }
    }

    if (count >= 1) printf("%d\n", median1);
    if (count >= 2) printf("%d\n", median2);
    if (count >= 3) printf("%d\n", median3);
    if (count >= 4) printf("%d\n", median4);
    if (count >= 5) printf("%d\n", median5);

    return 0;
}
