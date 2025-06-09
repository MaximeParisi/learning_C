#include <stdlib.h>
#include <stdio.h>

int my_print_alpha(void)
{
    char letters[26] = "abcdefghijklmnopqrstuvwxyz";
    printf("%s\n", letters);
    return 0;
}

int main( int argc, char* argv[])
{
    my_print_alpha();
    return 0;
}