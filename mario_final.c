#include <cs50.h>
#include <stdio.h>
//print the first part function
void first(int n);

int main(void)
{
    int ans = get_int("Height: ");
    first(ans);
}

void first(int n)
{
    for(int i = 1; i<=n ; i++) 
    {
        // try
        for (int j = n-i; j > 0; j--) printf(" ");
        for (int j = 0; j < i; j++) printf("#");
        printf("  ");
        for (int j = 0; j < i; j++) printf("#");
        //stop
        printf("\n");
    }
}