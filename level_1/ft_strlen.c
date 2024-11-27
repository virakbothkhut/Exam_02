#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int i;
    while(str[i])
    {
        i++;
    }   
    return i;
}

int main()
{
    char *s = "Hello";
   int result = ft_strlen(s);
    printf("Result %d\n", result);
    return 0;
    
}