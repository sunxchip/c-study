#include <stdio.h>

int main(){
    int a,b,c,total;

    scanf("%d%d%d",&a,&b,&c);

    total = a+b+c;
    int score = total/3; 

    if ( score >=90)
	printf("A\n");
    
    else if (score>=80)
	printf("B\n");
	
    else if (score>=70)
	printf("C\n");
	
    else if (score>=60)
	printf("D\n");
	
    else 
	printf("F\n");


    if (a>b && a>c)
        printf ("max: %d\n",a );
    else if (b > a && b >c)
        printf ("max: %d\n",b);
    else
        printf("max: %d\n",c);

    if (a<b && a<c)
        printf ("min: %d\n",a );
    else if (b < a && b < c)
        printf ("min: %d\n",b);
    else
        printf("min: %d\n",c);
    
	
	return 0;
}