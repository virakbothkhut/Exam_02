#include <stdio.h>
#include <unistd.h>

void	put_nbr(int nbr)
{
	int	digit;

	if (nbr > 9)
		put_nbr(nbr / 10);
	digit = nbr % 10 + '0';
	write(1, &digit, 1);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str++ - '0';
	}
	return (result * sign);
}

int	is_prime(int n)
{
	int	i;

	i = 2;
	if (n <= 1)
		return (0);
	while (i * i <= n)
	{
		if (n % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
int	main(int ac, char **av)
{
	int	nbr;
	int	sum;

	if (ac == 2)
	{
		nbr = ft_atoi(av[1]);
		sum = 0;
		while (nbr > 0)
		{
			if (is_prime(nbr))
			{
				sum += nbr;
			}
			nbr--;
		}
		put_nbr(sum);
		printf("\n");
	}
	else
	{
		write(1, "0", 1);
		write(1, "\n", 1);
		return (0);
	}
}
