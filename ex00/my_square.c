#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int my_square(int q, int b)
{  // a = 5 , b = 3
    for (int i = 1; i <= b; i++)
    {
        for (int j = 1; j <= q; j++)
        {
            if ((i == 1 || i == b) && (j == q || j == 1))
            {
                printf("o");
            }
            else if (i == 1 || i == b)
            {
                printf("-");
            }
            else if (j == 1 || j == q)
            {
                printf("|");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
int main(int ac, char **av)
{
    if (ac == 3)
    {
        int x = atoi(av[1]);
        int y = atoi(av[2]);
        my_square(y, x);
    }
}