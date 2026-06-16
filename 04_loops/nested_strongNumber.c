#include <stdio.h>

int main() {
    int n, fact = 1, digit, sum = 0, original;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;

    while (n != 0){
        digit = n % 10;
        for(int i = 1; i<=digit; i++){
            fact = fact * i;
        }
        sum += fact;
        n /= 10;
        fact = 1;
    }
    if(sum == original) {
        printf("%d is a strong number.\n", original);
    } else {
        printf("%d is not a strong number.\n", original);
    }
    return 0;
}