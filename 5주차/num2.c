#include <stdio.h>

int main(){

    int m = 0, n =0 , o =0;
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);

    switch (a) //처음고른 메뉴 
    {
    case 1: m += 5000; break; // 왼쪽의 변수에 메뉴 가격을 더해중
    case 2: m += 2500; break;
    case 3: m += 2000; break;
    case 4: m += 1500; break;
    case 5: m += 1000; break;
    default:  printf( "none\n");
    }
    
    switch (b) //두번쩨로 고른 메뉴
    
    {
    case 1: n += 5000; break;
    case 2: n += 2500; break;
    case 3: n += 2000; break;
    case 4: n += 1500; break;
    case 5: n += 1000; break;
    default: printf("none\n");
    }

    switch (c)
    
    {
    case 1: o += 5000; break;
    case 2: o += 2500; break;
    case 3: o += 2000; break;
    case 4: o += 1500; break;
    case 5: o += 1000; break;
    default: printf("none\n");
    }

    int total = m+n+o; //총 메뉴 ㄱㅡㅁ액 저장 

    printf("Total:%d\n",total); //총 비용 출력

    if (total <= 10000) // 10000원보다 적거나 같을 시 나머지 금액 출력
        printf("Change: %d\n", 10000-total); 
    else if (total > 10000) // 총 메뉴 금액이 10000원보다 클 시 문구출략
        printf("Insufficient Money");
    

    

    return 0;

}