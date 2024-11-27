#include <unistd.h>
#include <stdlib.h>

void	print_hex(int nbr)
{
	char hex_num[] = "0123456789abcdef";
	if (nbr > 16)
		print_hex(nbr / 16);
    write(1, &hex_num[nbr % 16], 1);
}

int main (int ac, char **av)
{
    if(ac == 2)
    {
        int nbr = atoi(av[1]);
        print_hex(nbr);
    }
    write(1, "\n", 1);
    return 0;
}