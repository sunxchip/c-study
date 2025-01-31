#include <stdio.h>

int main (){
    int a;
    char b;

    scanf ("%d",&a);


    int tens = a /10;
    int ones = a %10;

    
    if (9 >= a ||99 < a){
        printf ("none");
    }
    else{
        switch(tens){
            case 1:
                switch (ones){
                    case 0 : printf("ten"); break;
                    case 1 : printf("eleven"); break;
                    case 2 : printf("twelve"); break;
                    case 3 : printf("thirteen"); break;
                    case 4 : printf("fourteen");break;
                    case 5 : printf("fifteen"); break;
                    case 6 : printf("sixteen"); break;
                    case 7 : printf("seventeen"); break;
                    case 8 : printf("eighteen"); break;
                    case 9 : printf("nineteen");break; 
                }
            return 0; // 리턴은 함수에서 값을 출력하게 만드는 것으로 함수가 종료되는 것 , case 함수에 충족 했다면 콘솔에 출력하고 리턴에 의해 함수 종료 ,  // 충족하지 않다면 다음 케이스로 넘어감 
                    //  switch문이 하나이기 때문에  switch문을 종료시키는 것과 함수를 종료 시키는 것이 크게 다르지 않기 때문에 break 대신 return을 사용해도 정상 작동을 한다
            case 2 : printf("twenty"); break;
            case 3 : printf("thirty");  break;
            case 4 : printf("forty"); break;
            case 5 : printf("fifty");  break;
            case 6 : printf("sixty");  break;
            case 7 : printf("seventy"); break;
            case 8 : printf("eighty");  break;
            case 9 : printf("ninety"); break;
        }
    if ( ones != 0 ){
            printf("-");
            switch(ones) {
            case 1: printf("one"); break;
            case 2: printf("two"); break;
            case 3: printf("three"); break;
            case 4: printf("four"); break;
            case 5: printf("five"); break;
            case 6: printf("six"); break;
            case 7: printf("seven"); break;
            case 8: printf("eight"); break;
            case 9: printf("nine"); break;
            }
            }
        }

}
    
    


    
