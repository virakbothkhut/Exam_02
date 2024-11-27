#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strdup(char *src)
{
    int i = 0;
    int len = 0;
    char *dup;

    while(src[len])
        len++;
    
    dup = (char *)malloc(sizeof(char)*(len+1));
    if(!dup)
        return NULL;
    
    while(src[i])
    {
        dup[i] = src[i];
        i++;
    }
    dup[i] = '\0';
    return dup;
}

// int main (void)
// {
//     char *src = "hello world";
//     char str[49];
//     char *result = ft_strdup(src);
//     char *res = strdup(src);
//     printf("%s\n", result);
//      printf("%s\n", res);
//      free(result);
//      free(res);
// }