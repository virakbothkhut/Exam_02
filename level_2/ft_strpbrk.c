#include <stdio.h>
#include <string.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
    if(!s1 || !s2)
        return NULL;

	int	i;

	while (*s1)
	{
		i = 0;
		while (s2[i])
		{
			if (*s1 == s2[i])
			{
				return ((char *)s1);
			}
			i++;
		}
        s1++;   
	}
	return (NULL);
}

int	main(void)
{
	char *s1 = "abcdef";
	char *acc = "d";
	char *res = ft_strpbrk(s1, acc);
	char *result = strpbrk(s1, acc);
	printf("%s\n", res);
	printf("%s\n", result);
}