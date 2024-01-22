//write a progam in C to generate the following lines
/*
4444
333
22
1
*/

#include<stdio.h>

int main(){
    int i,j,num=4;
    for (i = num; i >= 1; i--) {
       for (j = 1; j <= i; j++){
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}