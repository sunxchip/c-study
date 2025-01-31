#include <stdio.h>

int main() {
    char num[101]; 
    int len = 0;  
    int i = 0;


    scanf("%s", num);

    while (num[len] != '\0') {
        len++;
    }

    int a = 1; 
    for (i = 0; i < len / 2; i++) {
        if (num[i] != num[len - 1 - i]) {
            a = 0;
            break;
        }
    }

    if (a) {
        for (i = 0; i < (len + 1) / 2; i++) {
            printf("%c", num[i]);
        }
        printf("\n");
    } else {
        printf("none\n");
    }

    return 0;
}
