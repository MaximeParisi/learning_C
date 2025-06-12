#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char *my_strdup(char const *src)
{
    int i = 0;
    while (*(src+i) != '\0')
    {
        i++;
    }

    char *str = malloc(i+1);
    if( str == NULL)
    {
        return NULL;
    }
    
    strcpy(str, src);

    return str;
}

int main(int argc, char const *argv[])
{
    char const src[30] = "Hello";

    char *result = my_strdup(src);

    printf("result : %s \n", result);
    
    return 0;
}
