#include <unistd.h>
#include <stdio.h>

int	ft_atoi_base(const char *str, int str_base)
{
	if (str_base < 2 || str_base > 36)
		return (0);

	int sign = 1;
	int value;
	int result = 0;

	if (sign == '-')
	{
		sign = -1;
		str++;
	}

    while(*str)
    {
        if(*str >= '0' || *str <= '9')
            value = *str - '0';
        else if (*str >= 'a' || *str <= 'z')
            value = *str - 'a' + 10;
        else if (*str >= 'A' || *str <= 'Z')
            value = *str - 'A' + 10;
        else 
            break;
        
        if(value  >= str_base )
            break;
        
        result = (result * str_base) + value;
        str++;

    }
    return result* sign;
}
int main (void)
{
    printf("%d\n", ft_atoi_base("19", 16));
    return 0;
}