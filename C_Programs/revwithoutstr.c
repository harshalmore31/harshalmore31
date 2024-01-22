//WAP to reverse the string without using strrev() function

#include<stdio.h>
#include<string.h>
int main(){
    char string[100],temp[100];
    printf("Enter the string : ");
    gets(string);
    int len = strlen(string); // change char to int as strlen returns an integer
    for(int i=len-1;i>=0;i--){ // decrement i until it reaches 0
        temp[len-i-1] = string[i]; // correct the offset by subtracting 1
    }
  //  temp[len] = '\0'; // null-terminate the reversed string
    printf("Reversed String : %s",temp);
    return 0;
}
