#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
*main -starting point of code
*
*Return : 0 ...success
*/
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
/*code goes here*/
        if (n > 0)
                printf("%d is positive\n", n);
        else if (n == 0)
                printf("%d is zero\n", n);
        else if (n < 0)
                printf("%d is negative\n", n);
        return (0);
}
