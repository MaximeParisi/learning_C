#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int my_print_revalpha ( void )
{
    char letter = 'z';
    while (letter >= 'a')
    {
        write(1, &letter, 1);
        letter --;
    }
    write(1, "\n", 1);

    return 0;
    
}

int main( void)
{
    my_print_revalpha();
    return 0;
}

