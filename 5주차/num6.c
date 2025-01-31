#include <stdio.h>

int main() {
    int a ,num1,num2,num3,num0; 

    scanf("%d",&a);
    

    num0 = (a >= 10000 && a <= 99999 && a % 100 == 0); //다섯자리 인지 판별하고 100으로 나눴을때 0이 될 수 있나!
    num1 = (a/100);


    switch (num0) {
        case 0 : printf("none\n"); break;
        case 1 :
            switch(num1){
                case 100 : printf("Seoul\n"); break;
                case 101 : printf("Seoul\n"); break;
                case 102 : printf("Seoul\n"); break;
                case 103 : printf("Busan\n"); break;
                case 104 : printf("Busan\n"); break;
                case 105 : printf("Gwangju\n"); break;

            default: printf("none\n");
        }


    }
    return 0 ;

}