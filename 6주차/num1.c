#include <stdio.h>

int main() {
    float a, b, c;
    int d = 1;

    
    scanf("%f", &a);
    c = a;

    while (1) {
        scanf("%f", &b);

        
        if (b <= 1.0) {
            break;
        }

        
        float diff1 = (b - a) < 0 ? -(b - a) : (b - a);
        float diff2 = (c - a) < 0 ? -(c - a) : (c - a);

        
        if (d || diff1 < diff2) {
            c = b;
            d = 0;
        }
    }

    printf("%.2f\n", c);

    return 0;
}





    // 이 코드의 문제점 !!!! 가까운 값이 아닌 입력 받은 값보다 큰 수만 출력
    // #include <stdio.h>

    // int main (){
    //     float num0 , num1 ,new; 

    //     scanf ("%f" ,&num0); // num0 변수에 입력 받기

    //     num0 = num1; // 입략 받은 값 num1에 저장

    //     do{
    //         scanf("%f",&new);  // 새로운 값을 입력 받고 new변수에 값 저장

    //         if (new <= 1.0){ //입력 받은 값이 0.1이하면 중단
    //             break; }
    //         if (new > num1){ // 처음 입력 받은 값이 새로 입력 받은 값보다 크면 
    //             num1 = new; // num1에 새로운 new 값을 저장
    //         }

    //     }while (1); //break 문에 포함 된 조건이 만족 할 때 까지 반복
        
    //         printf("%.2f\n",num1);

    //     return 0;
    // }