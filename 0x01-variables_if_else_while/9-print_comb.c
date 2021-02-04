#include <stdio.h>
#include <stdlib.h>

/**
*main -prints decimal system numbers
*
*Return 0 on success
*/

int main(void)
{
        int a = 0;
        for (a = 0; a < 10; a++)
	{
	        putchar(a + '0');
	        if (a < 9)
		{
		        putchar(',');
		        putchar(' ');
		}
	}
        putchar('\n');
        return (0);
}

