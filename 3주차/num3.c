#include <stdio.h>

int main(){
    double a;
    double b;

    scanf("%lf",&a);
    scanf("%lf",&b);

    double c = a*b;

    printf("area = %.2f\n",c);

    return 0;
}