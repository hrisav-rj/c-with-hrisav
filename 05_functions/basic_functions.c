#include <inttypes.h>
#include<stdio.h>


// Function Prototype
int sum(int, int);
void goodMorning();
void goodAfternoon();
void goodEvening();
double area(float);

// Function Definition
int sum(int x, int y){
    return x + y;
}
void goodMorning(){
    printf("Good Morning\n");
}
void goodAfternoon(){
    printf("Good Afternoon\n");
}
void goodEvening(){
    printf("Good Evening\n");
}

int main(){
    // int n1, n2;
    // printf("Enter 1st number: ");
    // scanf("%d", &n1);
    // printf("Enter 2nd number: ");
    // scanf("%d", &n2);
    // printf("The sum is %d\n", sum(n1, n2));     //Calling function while printing the value


    // Function Call
    // goodMorning();
    // goodAfternoon();
    // goodEvening();
    
    
    // To print "Good Morning" 5 times
    for (int i=1;i<=5;i++){
        goodMorning();
    }

    


    
    return 0;
}