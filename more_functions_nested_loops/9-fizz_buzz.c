#include <stdio.h>
int main(void)
{
    int num = 1;  // Initialize num to start from 1

    while (num <= 100)
    {
        if ((num % 3 == 0) && (num % 5 == 0))
            printf("FizzBuzz");
        else if (num % 3 == 0)
            printf("Fizz");
        else if (num % 5 == 0)
            printf("Buzz");
        else
            printf("%d", num);

        // Print a space after each output, except the last one
        if (num != 100)
            printf(" ");
        
        num++;
    }

    printf("\n");  // Print newline at the end
    return (0);
}
