#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


int ft_atoi(char *str)
{
    int sign =1;
    int result = 0;

    while(*str == ' ' || *str >= 9 && *str <= 13)
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
int main (int ac, char **av)
{
    if(ac < 2)
    {
        write(1, "\n", 1);
    }
    else
    {
        int nbr = ft_atoi(av[1]);
        int i = 1;
        while( i < 10)
        {
            printf("%d x %d = %d\n", i, nbr, i * nbr);
            i++;
        }
    }
    return 0;
}