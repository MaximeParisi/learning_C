#include <stdlib.h>
#include <stdio.h>

int my_compute_power_it(int nb, int p)
{
    if(p == 0){
        return nb;
    }else if (p == 1)
    {
        return nb;
    }    
    else{
        return nb * my_compute_power_it(nb, p -1);
    }
}

int main(void)
{

    int result = my_compute_power_it(3, 3);
    printf("%d\n", result);
    return 0;
}