// Write a program to find sum of boundary elements of two-dimensional array

#include<stdio.h>

int main(){
    int a[10][10],n,sum;
    printf("Enter the no. of Matrix : ");
    scanf("%d",&n);
    printf("Enter the Elements of Matrix : \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || j==0|| i==(n-1)|| j==(n-1))
            {
            sum = sum + a[i][j];
            }
        }
    }
    printf("sum is %d",sum);
    
    return 0;
}