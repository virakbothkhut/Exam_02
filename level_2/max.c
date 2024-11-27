#include <unistd.h>
#include <stdio.h>

int	max(int *tab, unsigned int len)
{
	int i = 0;
	int result;
	result = tab[i];
	while (i < len)
	{
		if (result < tab[i])
		{
			result = tab[i];
		}
		i++;
	}
    return result;
}

int main(void)
{
    int num[] = {124, 2, 3, 5, 56, 46};
    unsigned int size =  sizeof(num)/ sizeof(num[0]);

    int result = max(num, size);
    printf("the result is %d\n", result);
}