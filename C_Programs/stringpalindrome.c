//WAP to check given string is Palindrome string or not

#include<stdio.h>
#include<string.h>
int main(){
    char string[100],temp[100];
    printf("Enter the string : ");
    gets(string);
    strcpy(temp,string);
    strrev(string);
    if(strcmp(string,temp)==0){
        printf("%s is palindrome",string);
    }
    else{
        printf("%s is not palindrome",temp);
    }
    return 0;
}