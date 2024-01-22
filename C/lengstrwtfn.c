// Program to find length of the string without using strlen() function
#include<stdio.h>

int main(){
    char string[100];
    int length = 0; // Initialize length to zero

    printf("Enter the name of String : ");
    gets(string);

    // Calculate length of string
    for(int i=0; string[i]!='\0'; i++){
        length++; // Increment length for each character until null character
    }

    printf("%d characters are there in %s String",length,string);
    return 0;
}
