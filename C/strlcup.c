//WAP to convert lower case alphabets present in the string to uppercase

#include<stdio.h>
#include<string.h>

int main(){
    char string[100];
    printf("Enter the string : ");
    gets(string);
    strupr(string);
    printf("%s",string);
    return 0;
}