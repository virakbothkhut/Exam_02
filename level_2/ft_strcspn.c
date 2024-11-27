#include <string.h>
#include <stdio.h>
#include <stdlib.h>

size_t ft_strcspn(const char *s, const char *reject)
{
    int i = 0;
    int j;
  
    while(s[i])
    {
        j = 0;
        while(reject[j])
        {
            if(s[i] == reject[j])
            {
                return i;
            }
            j++;
        }
        i++;
    }
    return i;
}

int main (void)
{
    char *str = "abcd";
    char *srr = "gd";
    size_t result = strcspn(str, srr);
    size_t res = ft_strcspn(str, srr);

    printf("RESULT: %ld\n", result);
    printf("RES : %ld\n", res);
}