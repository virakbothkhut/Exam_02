#include <stdio.h>
#include <stdlib.h>

int	pgcd(int a, int b)
{
	int	temp;

	while (b != 0)
	{
		temp = b;
		b = a % b;
		a = temp;
	}
	return (a);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		int a = atoi(av[1]);
		int b = atoi(av[2]);
		int result = pgcd(a, b);
		printf("%d\n", result);
		return (0);
	}
	printf("\n");
	return (0);
}