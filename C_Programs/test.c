#include<stdio.h>

int main(){
    int n,fact=1;
    printf("Enter the limit : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fact = fact*i;                // 5*4*3*2*1
    }
    printf("Factorial = %d",fact);
    return 0;
}