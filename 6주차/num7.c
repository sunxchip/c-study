#include <stdio.h>

int main() {
    int total;
    
    scanf("%d", &total);

    
    int hours = total / 3600; //시
    int minutes = (total % 3600) / 60; //분
    int seconds = total % 60; //초

    printf("%dh %dm %ds\n", hours, minutes, seconds);

    return 0;
}
