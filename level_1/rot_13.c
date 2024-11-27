#include <unistd.h>
#include <stdio.h>

int main (int ac, char **av)
{
    if(ac  == 2)
    {
        int i = 0;
        while(av[1][i])
        {
            if(av[1][i] >= 'a' && av[1][i] <= 'y' )
                av[1][i] =  (av[1][i] - 'a' + 13) % 26 + 'a';
           
            else if (av[1][i] >= 'A' && av[1][i] <= 'Y')
                av[1][i] = (av[1][i] - 'A' + 13) % 26 + 'A';
            write(1, &av[1][i], 1);
            i++;
        }
        // printf("char %c, index: %d\n", av[1][i], i);
    }
    write(1, "\n",1);
    return 0;
}