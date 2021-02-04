#include <stdio.h>
#include <stdlib.h>

/**
*main-prints hex decimal system
*
*Return 0 on success
*/

int main(void)
{
        int nums, alphas, i;
        for (nums = 48, i = 0; i < 10; nums++, i++)
	{
	        putchar(nums);
	}
	for (alphas = 97, i = 0; i < 6; alphas++, i++)
	{
	        putchar(alphas);
	}
        putchar('\n');
        return (0);
}
