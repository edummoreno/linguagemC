#include <stdio.h>

int main()
{

    int c;

    printf("i'm waiting for a character");
    c = getc(stdin);
    printf("I waited for '%c' character.\n", c);
    return (0);
}