#include <stdlib.h>
#include <stdio.h>


int my_print_comb(void)
{
    int i = 0;
    int j = 1;
    int k = 2;

    int i1 = 0;
    int j1 = 1;
    int k1 = 2;

    int i2 = 0;
    int j2 = 1;
    int k2 = 2;

    for(i ; i <= 7; i++)
    {
        j = 1;
        k = 2;

        j1 = j2;
        k1 = j2;
        for(j ; j <= 8; j++)
        {
            for(k ; k <= 9; k++)
            {
                printf("%d", i);
                printf("%d", j);
                printf("%d", k);
                printf(" , ");
            }
            k1++;
            k = k1;
        }
        j1++;
        j = j1;
        j2++;
        k2++;
    }
    printf("\n");
    return 0;
}

int main(void)
{
    my_print_comb();
    return 0;
}