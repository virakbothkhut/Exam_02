#include <unistd.h>

int	main(int ac, char **av)
{
	int i = 0;
	int j;
	unsigned char seen[256] = {0};

	if (ac == 3)
	{
		while (av[1][i])
		{
			if (!(seen[(unsigned char)av[1][i]]))
			{
				write(1, &av[1][i], 1);
				(seen[(unsigned char)av[1][i]]) = 1;
			}
            i++;
		}
		while (av[2][j])
		{
			if (!seen[(unsigned char)av[2][j]])
			{
				write(1, &av[2][j], 1);
				(seen[(unsigned char)av[2][j]]) = 1;
			}
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}