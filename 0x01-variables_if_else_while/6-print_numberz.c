#include <stdio.h>
#include <stdlib.h>

/**
*main-print numbers
*
*Return : 0
*/

int main(void)
{
        int a;
        for (a = 0; a < 10; a++)
	{
                putchar(a + '0');
	}
        putchar('\n');
        return (0);
}
