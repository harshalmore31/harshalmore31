// Write a recursive function to calculate x raise to y

#include<stdio.h>

int raise(int x,int y){
    if(y==0){
        return 1;
    }
    else{
        return x*raise(x,(y-1));
    }
}

int main(){
    int x,y;
    printf("Enter the values of x & y : ");
    scanf("%d %d",&x,&y);
    printf("%d",raise(x,y));
    return 0;
}