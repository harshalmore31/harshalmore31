#include<stdio.h>

int main(){
    int a[10][10],n;
    printf("Enter the no. of Matrix : ");
    scanf("%d",&n);
    printf("Enter the Elements of Matrix : \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Transpose : \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}