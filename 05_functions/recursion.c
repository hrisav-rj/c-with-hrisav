#include<stdio.h>

// function prototype
int factorial(int);
int countdown(int);

// function definition
int countdown(int x){
    if(x == 0){
        return 0;
    }
    printf("%d, ", x);
    return countdown(x-1);
}

int factorial(int n){
    if (n == 0 || n == 1){
        return 1;
    }
    return n * factorial(n - 1);
}

int main(){
    // Recursion: it is a programming technique in which a function calls itself untill a stopping condition (base condition) reaches.

    // Example: calculating factorial of n using recursion
    // int n;
    // printf("Enter the number: ");
    // scanf("%d", &n);
    // printf("The factorial of %d is %d.\n", n, factorial(n));

    // Example: printing counting in reverse order till 1
    int a;
    printf("Enter number: ");
    scanf("%d", &a);
    countdown(a);   // function call

    
    return 0;
}