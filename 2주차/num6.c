#include <stdio.h>

int main(){
    char num;

    scanf("%c",&num);

    printf("(%%c)%c\n", num);
    printf("(%%d)%d\n",num- '0');

    return 0;

}
