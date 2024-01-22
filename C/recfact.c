//Write a recursive function to calculate factorial of n

#include<stdio.h>

int fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}

int main(){
    int n;
    printf("Enter the limit : ");
    scanf("%d",&n);
    printf("Factorial = %d",fact(n));
    return 0;
}