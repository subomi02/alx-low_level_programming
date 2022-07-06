#include <stdio.h>

#include <stdlib.h>

/**

*main - Prints the alphabet in lowercase

*Return: always 0 (success)

*/

int main()

{

    print_alphabet();

}

    char b;

void print_alphabet(void)

{

    for(b='a'; b<='z' ; b++)

        putchar(b);

    return (0);

}

