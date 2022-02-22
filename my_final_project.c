#include <cs50.h>
#include <stdio.h>

void isaina(int isany);
void mifandimby(int a, int b);

int main(void) {
    // int ans = get_int("Height: ");
    isaina(4);
}

void mifandimby(int a, int b) {
    if(a>b) {
        mipoitra(a);
    }    
}

void isaina(int isany) {
    for (int i = 1; i <= isany; i++) {
        for (int j = 0 ; j < i ; j++) {
            mifandimby(0,1);
        }
        printf("\n");
    }
}