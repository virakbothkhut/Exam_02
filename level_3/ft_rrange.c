#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	*ft_rrange(int start, int end)
{
	int	len;
	int	*res;
	int	i;

	len = abs(end - start) + 1;
	if (len <= 0)
		return (0);
	res = (int *)malloc(sizeof(int) * (len));
	if (!res)
		return (NULL);
	i = 0;
	while (i <= len)
	{
        if(end < start)
        {
            res[i] = end;
            end++;
        }
        else 
        {
            res[i] = end;
            end--;
        }
        i++;
	}
    return res;
}

int main (void)
{
    int start = 0;
    int end = 3;

    int *range = ft_rrange(start, end);
    int i = 0;
    while(i <= abs(end-start))
    {
        printf("%d ", range[i]);
        i++;
    }
    return 0;
}
