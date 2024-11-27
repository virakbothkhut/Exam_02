#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		int nbr = atoi(av[1]);
		int i = 2;
		if (nbr == 1)
			printf("1");
		while (i * i <= nbr)
		{
			if (nbr % i == 0)
			{
				printf("%d", i);
				if (nbr == i)
					break ;
				printf("*");
				nbr /= i;
			}

			else
			{
				i++;
			}
		}
		if (nbr > 1)
			printf("%d", nbr);

		printf("\n");
	}
	return (0);
}