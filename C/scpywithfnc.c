//WAP to copy the string from source array to destination array without using strcpy() function

#include<stdio.h>
#include<string.h>
int main(){
    char string1[100];
    char string2[100];
    printf("Enter the string1 : ");
    gets(string1);
    printf("Enter the string2 : ");
    gets(string2);
    printf("\nString1 before copying : %s\n",string1);
    printf("String2 before copying : %s\n",string2);
    for(int i=0;i<100;i++){
        char temp = string1[i];
        string1[i] = string2[i];
        string2[i] = temp;
    }
    printf("\nString1 after copying : %s\n",string1);
    printf("String2 after copying : %s",string2); 
    return 0;
}