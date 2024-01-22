#include<stdio.h>

int main(){
    int n,i,j;
    printf("Enter n intergers : ");
    scanf("%d",&n);
    int arr[n];
    for(i = 0;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    // Bubble sort algorithm
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted array in ascending order:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}