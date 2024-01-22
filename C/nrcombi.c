//Write a recursive function to calculate n combination r
#include<stdio.h>

int combi(int n,int r){
    if(n==r || r==0){
        return 1;
    }
    else{
        return combi(n-1,r-1)+combi(n-1,r); // nCr = n-1Cr-1 + n-1Cr
    }
}
int main(){
    int n,r;
    printf("Enter the values of n & r : ");
    scanf("%d %d",&n,&r);
    printf("%d",combi(n,r));
    return 0;
}