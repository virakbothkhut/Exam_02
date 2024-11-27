#include <stdio.h>

char *ft_strrev(char *str)
{
    int i = 0;
    int len = 0;
    while(str[len])
        len++;
        printf("the lengthis %d\n", len);
    while(i < len/2)
    {
        int temp = str[i];
        str[i] = str[len-1-i];
        str[len-1-i] = temp;
        i++;
    }
    return str;
}

int main(void)
{
    char str1[] = "abcdefg";
    char str2[] = "12345";
    char str3[] = "";
    char str4[] = "a";

    // Print results after reversing the strings
    printf("Original: abcdefg | Reversed: %s\n", ft_strrev(str1)); // Expected: "fedcba"
    // printf("Original: 12345 | Reversed: %s\n", ft_strrev(str2)); // Expected: "54321"
    // printf("Original:  | Reversed: %s\n", ft_strrev(str3)); // Expected: ""
    // printf("Original: a | Reversed: %s\n", ft_strrev(str4)); // Expected: "a"

    return 0;
}
