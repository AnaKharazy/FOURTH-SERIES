#include <stdio.h>

void main() {
    char color;
    printf("\n enter the first letter of a color:");
    scanf("%c", &color);
    if((color=='o') || (color=='O')) {
        printf("\n orange contains ammonia");
    }
    else if ((color=='b') || (color=='B'))
    {
        printf("\n brown contains carbon monoxide");
    }
    else if((color=='y') || (color=='Y'))
    {
        printf("\n yellow contains hydrogen");
    }
    else if((color=='g') || (color=='G'))
    {
        printf("\n green contains oxygen");
    }
    else
    {
        printf("\n unknown content");
    }
    return 0;
}
