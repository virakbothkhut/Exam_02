#include <unistd.h>

void ft_putnbr(int nbr)
{
     char digit;
     if( nbr > 9)
        ft_putnbr(nbr/10);
    digit = nbr % 10 + '0';
    write(1, &digit, 1);
}

int main ()
{
    int i = 1;
    while(i <= 100)
    {
        if (i % 15 == 0)
            write(1, "Fizzbuzz",8);
        else if (i % 3 == 0)
            write(1, "fizz", 4);
        else if(i % 5 == 0)
            write(1,"buzz", 4);
        else
            ft_putnbr(i);
        write(1, "\n", 1);
        i++;
    }

    return 0;
}