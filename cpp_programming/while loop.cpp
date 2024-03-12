#include <stdio.h>

int main(void)
{
        /* temporary storage for incoming numbers */
        int number;

        /* we will store the currently greatest number here */
        int max = -100000;

        /* get the first value */
        scanf ("%d", &number);

        /* if the number is not equal to -1 we will continue */
        while (number != -1) {

                /* is the number greater than max? */
               if (number > max)

                     /* yes – update max */
                     max = number;

                /* get next number */
                scanf ("%d", &number);

        }

        /* print the largest number */
        printf("The largest number is %d \n", max);

        /* finish the program successfully */
        return 0;
}
