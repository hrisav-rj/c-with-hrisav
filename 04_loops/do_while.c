#include<stdio.h>

int main(){
    // WAP to print numbers form 11 to 20
    // int a = 1;
    // do {
    //     if (a>10){
    //         printf("%d\n", a);
    //     }
    //     a++;
    // }while (a<=20);


    // WAP to print first n natural numbers, take n as user input
    int n, i=1;
    printf("To which number you want the natural numbers: ");
    scanf("%d", &n);
    do {
        printf("%d ", i);
        i++;
    }while (i<=n);

    
    return 0;
}