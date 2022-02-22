#include <stdio.h>

int main()
{
    char name[40];
    printf("Insert Your name: ");
    scanf("%s", name);
    printf("Hi, %s!\nYou look very nice today!\n", name);
    return 0;
}