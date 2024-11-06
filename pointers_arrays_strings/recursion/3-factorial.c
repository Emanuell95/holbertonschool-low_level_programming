#include "main.h'

/**
* int factorial(int n);
*
*if n is lower than 0, the function should return -1 to indicate an error
*/

  int factorial(int n) {
    if (n < 0) {
        return -1;  // Return -1 to indicate an error for negative input
    }
    if (n == 0) {
        return 1;   // By definition, factorial of 0 is 1
    }
    
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}
