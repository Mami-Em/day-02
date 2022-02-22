#include <cs50.h>
#include <stdio.h>

void meow();

int main(void)
{
    meow();
}

void meow()
{
    for(int i = 1; i<=3 ;i++)
    {
        for(int j = 0; j<i ; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}