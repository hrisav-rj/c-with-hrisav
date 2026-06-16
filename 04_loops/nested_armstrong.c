#include <stdio.h>
#include <math.h>

int main() {
    int n, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    int original = n;
    int sum = 0;

    while(n != 0) {
        // int digit = n % 10;
        count++;
        n /= 10;
    }
    n = original; // Reset n to the original number for comparison

    while (n != 0) {
        int digit = n % 10;
        sum += pow(digit, count);
        n /= 10;
    }

    if (sum == original) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is not an Armstrong number.\n", original);
    }

    return 0;
}