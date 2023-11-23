#include <stdio.h>
#include <stdlib.h>

char *itoa(int num)
{

    int size = snprintf(NULL, 0, "%d", num);


    char *str = (char *)malloc((size + 1) * sizeof(char));

    if (str == NULL)
    {
        return NULL;
    }

    snprintf(str, size + 1, "%d", num);

    return str;
}
