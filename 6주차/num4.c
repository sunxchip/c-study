#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d", &a);

    for ( c = 0; c < a; c++)
    {
        for (b = c; b < a - 1; b++)
        {
            printf(" ");
        }

        for (b = c + 1; b > 1; b--)
        {
            printf("%d", b);
        }

        for (b = 1; b <= c + 1; b++)
        {
            printf("%d", b);
        }

        printf("\n");
    }

    return 0;
}
