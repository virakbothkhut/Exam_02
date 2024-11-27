#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	*ft_range(int start, int end)
{
	int	len;
	int	*res;
	int	i;

	len = abs(end - start) + 1;
	if (len <= 0)
		return (NULL);
	res = (int *)malloc(sizeof(int) * (len));
	if (!res)
		return (NULL);
	i = 0;
	while (i < len)
	{
		if (start < end)
		{
			res[i] = start;
			start++;
		}
		else
		{
			res[i] = start;
			start--;
		}
		i++;
	}
	return (res);
}
int	main(void)
{
	int start = 10;
    int end = 1;
    int *range = ft_range(start, end);

    int i = 0;
    while(i <= abs(end - start))
    {
        printf("%d ", range[i]);
        i++;
    }
    free(range);
}