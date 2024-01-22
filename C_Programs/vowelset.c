// Problem Statement : Use strnset() and change vowels to *

#include<stdio.h>
#include<string.h>

void replace_vowel(char x[]);
int main(){
    char string1[100];
    printf("Enter the string : ");
    gets(string1);
    replace_vowel(string1); 
    printf("%s",string1);
    return 0;
}

void replace_vowel(char x[]){
    for(int i=0;x[i]!='\0';i++){
        if(x[i]=='a' || x[i]=='e' || x[i]=='i' || x[i]=='o' || x[i]=='u' ||
           x[i]=='A' || x[i]=='E' || x[i]=='I' || x[i]=='O' || x[i]=='U'){
            x[i]='*';
        }
    }
}

