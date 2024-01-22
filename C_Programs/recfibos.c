// Recursive function to find kth term of Fibonacci series

#include<stdio.h>

int fibo(int x){              // x=4th position
    if(x == 1 || x == 2){
        return 1;
    }
    else{
        return fibo(x-2) + fibo(x-1); // fibo(4) = fibo(2) + fibo(3) = 1 + 2 = 3
    }
}

int main(){
    int k, result;
    printf("Enter the kth term : ");
    scanf("%d", &k);
    result = fibo(k);
    printf("The %dth term of the Fibonacci series is: %d\n", k, result);
    return 0;
}
