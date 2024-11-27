#include <unistd.h>
#include <stdio.h>

int gcd(int a, int b)
{
    int temp;
    while(b != 0)
    {
        temp = b;
        b =  a % b;
        a = temp;
    }
    return a;
}

unsigned int	lcm(unsigned int a, unsigned int b)
{
    if (a == 0 || b == 0)
        return 0;
    return (a /gcd(a, b)* b);
}

int main (void)
{
    unsigned int a = 8;
    unsigned int b = 10;
    unsigned int c = lcm(a,b);
    printf("%d\n", c);
}