#include <stdlib.h>
#include <stdio.h>

int my_compute_factorial(int num)
{   
    if(num < 0)
    {
        return 0;
    }else if (num == 0)
    {
        return 1;
    }else{
        return num * my_compute_factorial(num - 1);
    }
    
}

int main(void)
{
    int num;

    printf("donne un number : ");
    scanf("%d", &num);

    int result = my_compute_factorial( num );
    printf("%d \n", result);

    return 0;
}