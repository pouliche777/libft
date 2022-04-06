#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_countdigit(int c)
{
    int ndigit;

    ndigit = 0;
    if (c < 0)
    {
        ndigit ++;
        c = c * -1;
    }
    while (c > 0)
    {
        c = c / 10;
        ndigit++;
    }
}

char  *ft_itoa(int n)
{
    char *ptr;
    int i;

    i = ft_countdigit(n); 
    ptr = calloc(i, sizeof(char));
    if (ptr == NULL)
        return(NULL);
    if (n < 0)
    {
        ptr[0] = '-';
        n = n * -1;
    }
    while (n < 0)
    {
        ptr[i] = n % 10;
        i--;
        n = n /10;
    }
    return(ptr);
}