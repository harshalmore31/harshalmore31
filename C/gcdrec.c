//Write a recursive function to find GCD of two integer numbers
#include<stdio.h>

int gcd(int a, int b){
    if(b == 0){ // base case: If b is 0, a is the GCD
        return a;
    }
    else{ // recursive case: return the GCD of b and a % b
        return gcd(b, a%b);
    }
}

int main(){
    int num1, num2;
    printf("Enter the first number : ");
    scanf("%d",&num1);
    printf("Enter the second number : ");
    scanf("%d",&num2);
    printf("The GCD of the numbers is : %d",gcd(num1, num2));
    return 0;
}
