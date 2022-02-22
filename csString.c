#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string answer = get_string("Enter Your name: ");
    printf("Hi, %s!\nYou look really beautifull today!\n", answer);
}