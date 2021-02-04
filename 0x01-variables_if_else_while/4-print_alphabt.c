#include <stdio.h>
#include <stdlib.h>

/**
*main -prints the alphabet
*
*Return :0
*/

int main(void)
{
        char letter = 'a';
        while (letter != 'z' + 1)
        {
	        if (letter == 'q' || letter == 'e')
		{
		        letter++;
		}
		else 
		{
		         putchar(letter);
		}
	}
        putchar('\n');
        return (0);
}
