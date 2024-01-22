//Write a program to find sum of all the elements of two-dimensional array

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
    printf("Sum of all Elements : \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            sum = sum + a[i][j];
            
        }
    }
    printf("sum is %d",sum);
    
    return 0;
}