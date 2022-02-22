#include <cs50.h>
#include <stdio.h>

void printlines(int n);
void lines(int n);

int main(void)
{
    int n = get_int("Insert a number : ");
    lines(n);
}
// function to count lines
void lines(int n)
{
    for(int i = 1; i <= n; i++)
    {
        printlines(i);
    }
}
// function for printing lines of #
void printlines(int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        printf("#");
    }
    printf("\n");
}
