#include<stdio.h>

int main(){
    int a[10][10],i,n,j;
    printf("Enter the n matrix : ");
    scanf("%d",&n);
    printf("Enter the Elements of Matrix : \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
        scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i][j]!=a[j][i]){
                printf("Not symmetric");
                return 0;
            }
        }
    }
    printf("Symmetric");
    return 0;
}
