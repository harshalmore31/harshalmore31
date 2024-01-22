#include<stdio.h>
#include<string.h>

int main()
{
    float x1,x2;
    int n1,n2;
    scanf("%f%f",&x1,&x2);
    n1=(x1*100);
    n1=n1%100;
    n2=(x2*100);
    n2=n2%100;
    if(n1==n2)
    {   
        printf("equal");

    }
else
{
    printf("not equal");

}
return 0;
}
    