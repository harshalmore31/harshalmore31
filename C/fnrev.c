//Write a recursive function to find reverse value of the given integer
#include<stdio.h>

int rev(int x){
    if(x==0){
        return 0;
    }
    else{
        printf("%d",x%10);    // 256 = 256%10 = 6, 256/10 = 25, 25%10 = 5, 25/10 = 2, 2%10 = 2, 2/10 = 0
        return rev(x/10);
    }
}
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    rev(num);
    return 0;
}