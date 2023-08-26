#include <stdio.h>

int main() {
    int n,i;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    int factorial = 1;
    for (i = 1; i <= n; i++) {
        factorial *= i;
    }

    printf("The factorial of %d is %d.\n", n, factorial);

    return 0;
}
