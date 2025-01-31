#include <stdio.h>

int main(){
    int a;
    int b;

    scanf("%d",&a);

    if ( a%15 == 0){ //15로 나눴을때 0으로 나눠짐
        b = 15;
        printf("%d is a multiple of %d.\n",a,b);
    }

    else if ( a%5 == 0){   //15로 나눴을때 0으로 나눠짐
        b = 5;
        printf("%d is a multiple of %d.\n",a,b);
    }

    else if ( a%3 == 0 ){  // 3으로 나눴을때 0으로 나눠짐
        b = 3;
        printf("%d is a multiple of %d.\n",a,b);
    }
    
    else if ( a%3!=0 && a%5!=0 && a%15 != 0){ //모두 나눠지지 않았을때 a변수 출력
        printf("%d is a multiple of %d.\n",a,a);
    }
    

        return 0;
}