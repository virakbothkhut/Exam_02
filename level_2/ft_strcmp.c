#include <unistd.h>
#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    while(*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
    {
        s1++;
        s2++;
    }
    return *s1 - *s2;
}
int main()
{
    printf("%d\n", ft_strcmp("hello", "hello"));  // Output: 0
    printf("%d\n", ft_strcmp("abc", "abd"));      // Output: -1
    printf("%d\n", ft_strcmp("world", "word"));   // Output: 12
    printf("%d\n", ft_strcmp("test", "testing")); // Output: -105
    return 0;
}
