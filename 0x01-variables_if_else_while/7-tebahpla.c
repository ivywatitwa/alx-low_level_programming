#include <stdio.h>
#include <stdlib.h>

/**
*
*main-prints in reverse
*
*Return 0 on success
*/

int main(void)
{
        char letter = 'z';
        while (letter != 'a' - 1)
	{
                putchar(letter);
	        letter--;
	}
        putchar('\n');
        return (0);
}
