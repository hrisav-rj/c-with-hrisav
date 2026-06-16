#include <stdio.h>

int main() {
    int n, sum = 0, digit, original;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;

    while (n != 0 || sum > 9) {
        if(n == 0) {
            n = sum;
            sum = 0;
        }
        digit = n % 10;
        sum += digit;
        n /= 10;
    }
    printf("Sum: %d", sum);
    printf(sum == 1 ? "\n%d is a special number.\n" : "\n%d is not a special number.\n", original);
    return 0;
}