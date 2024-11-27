#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void rotone(char *s)
{
    while(*s)
    {
        printf("char: %c", *s);
        if ((*s >= 'a' && *s <= 'y') || (*s >= 'A' && *s <= 'Y'))
            ft_putchar(*s + 1);
        else if(*s == 'z' || *s == 'Z')
            ft_putchar(*s - 25);
        else 
            ft_putchar(*s);
    s++;
    }
}


int main (int ac, char **av)
{
    if(ac == 2)
    {   
        char *s = av[1];
        rotone(s);
        ft_putchar('\n');

    }
    // write(1, "\n", 1);
    return 0;
}