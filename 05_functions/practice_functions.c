#include<stdio.h>

float average(float, float, float);
int fibonacci(int);
int sum_natural(int);

int sum_natural(int n){
    if(n==1)
        return 1;
    return sum_natural(n-1) + n;
}

int fibonacci(int n){
    // if(n==1)
    //     return 0;
    // if(n==2)
    //     return 1;

    if (n == 1 || n == 2){
        return n-1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

float average(float x, float y, float z){
    return x+y+z/3;
}

int main(){
    // Problem 1:
    // float a, b, c;
    // printf("Enter first number: ");
    // scanf("%f", &a);
    // printf("Enter second number: ");
    // scanf("%f", &b);
    // printf("Enter third number: ");
    // scanf("%f", &c);
    // printf("The average of %.0f, %.0f, and %.0f is %.1f\n", a, b, c, average(a, b, c));

    // Problem 2: Fibonacci Series
    // fibo(n-1) + fibo(n-2)
    // int n;
    // printf("Enter the nth term: ");
    // scanf("%d", &n);
    // printf("The fibonacci number of %d term is %d\n", n, fibonacci(n));

    // Problem3: sum n natural numbers
    // int b;
    // printf("Enter number: ");
    // scanf("%d", &b);
    // printf("The sum of %d natural numbers is %d\n", b, sum_natural(b));

    //Problem 4: pattern
    // *
    // ***
    // *****
    // int n = 5;
    // for(int i=0; i<5;i++){
    //     for(int j = 0; j<2*i+1; j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }


    
    return 0;
}