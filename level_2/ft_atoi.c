#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_atoi(const char *str)
{
    int sign = 1;
    int result = 0;
    while(*str == 32 || *str >= 9 && *str <= 13)
        str++;
    if(*str == '-')
        sign = -1;
    if(*str == '-' || *str == '+')
        str++;
    while(*str >= '0' && *str <= '9')
    {
        result = result * 10 + *str++ - '0';
    }
    return (result * sign);
}

int main (void)
{
    char *str = "20228483647";
    int result = ft_atoi(str);
    int res = atoi(str);

    printf("%d\n", result);
    printf("%d\n", res);
}