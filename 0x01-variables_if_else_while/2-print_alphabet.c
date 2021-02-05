#include <stdio.h>
#include <stdlib.h>

/**
  *main-prints the alphabet
  *
  *return o on success
  */
int main(void)
{
        char letter = 'a';

        while (letter != 'z' + 1)
        { 
                putchar(letter);
                letter++;
        }
        putchar('\n');
        return (0);
}
