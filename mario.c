#include <cs50.h>
#include <stdio.h>

void count(int n);

int main(void)
{
    int ans = get_int("Height: ");
    count(ans);
}

void count(int n)
{
    for(int i = 1 ; i <= n ; i++)
    {
        for (int j = n-i; j > 0; j--) printf(" ");
        for (int j = 0; j < i; j++) printf("#");
        printf("\n");
    }
}