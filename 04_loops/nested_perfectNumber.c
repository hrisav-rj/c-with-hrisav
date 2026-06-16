#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    int i = 1;
    while (i <= n/2) {
        if (n % i == 0) {
            sum += i;
        }
        i++;
    }
    printf("Sum of divisors: %d", sum);
    if (sum == n) {
        printf("\n%d is a perfect number.\n", n);
    } else {
        printf("\n%d is not a perfect number.\n", n);
    }

    return 0;
}