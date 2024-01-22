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
        for(int j=i;j<n;j++){
            if(a[i][j] != a[j][i]){   
                printf("Matrix is not symmetric");
                return 0;
            }
        }
    }
    printf("Matrix is symmetric");
    
    return 0;
}
