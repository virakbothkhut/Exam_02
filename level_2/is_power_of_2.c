#include <unistd.h>
#include <stdio.h>

int	is_power_of_2(unsigned int n)
{   
    if(n == 0)
        return 0;
	return (n & (n - 1)) == 0;
}

int main (void)
{
    int a = 8;
    if(is_power_of_2(a))
        printf("%u is a power of 2\n", a);
    else
        printf("no it is not\n");
    return 0;
}