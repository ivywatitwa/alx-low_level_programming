#include <stdio.h>

   /**
    *main-programming starts here
    *Return:0
    *Description:Outputs size of 
    */

int main(void)

{

         printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(char));
         printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(int));
         printf("size of a long int: %lu byte(s)\n",(unsigned long)sizeof(long));
         printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(long long));
         printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(float));

         return (0);
}
