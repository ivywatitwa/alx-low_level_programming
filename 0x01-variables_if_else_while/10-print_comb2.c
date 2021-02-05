#include <stdio.h>
#include <stdlib.h>

/**
  *main -prints decimal number system
  *
  *Return 0 on completion
  */

int main(void)
{
        int a, b;

        for (a = 0; a < 10; a++)
	{
                for (b = 0; b < 10; b++)
	        {
	                putchar(a + '0');
	                putchar(b + 'o');
	                if (a == 9 && b == 9)
		        {
		                break;
                        }
	                        putchar(',');
	                        putchar(' ');
                }
	}
	putchar('\n');
        return (0);
}
