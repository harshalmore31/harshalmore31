//Write a Function to find largest out of two integers. Use it find largest out of three integers 

#include <stdio.h>
int largest(int a,int b,int c){
    if(a>b && a>c)
    {
        printf("%d is largest",a);
    }
    else if(b>c && b>a)
    {
        printf("%d is largest",b);
    }
    else
    {
        printf("%d is largest",c);
    }
}

int main()
{
    int a,b,c;
    printf("Enter three numbers : ");
    scanf("%d%d%d",&a,&b,&c);
    largest(a,b,c);
    return 0;
}
