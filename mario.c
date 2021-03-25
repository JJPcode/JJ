#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    do
    {
    n = get_int("How high should it be?:");
    }
    while (n < 0 || n > 8);
    
    for (int l = 0; l < n; l++)
    {
        for (int r = 0; r < n; r++)
        {
            if ( l + r < n - 1)
                printf(" ");
            else
            printf("#");
        }
        printf("\n");
    }
}

