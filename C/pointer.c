#include<stdio.h>
#include<string.h>

void replace_vowel_with_strnset(char *str, int n);

int main(){
    char string1[100];
    printf("Enter the string : ");
    fgets(string1, sizeof(string1), stdin);
    replace_vowel_with_strnset(string1, strlen(string1)); 
    printf("%s", string1);
    return 0;
}

void replace_vowel_with_strnset(char *str, int n){
    static const char vowels[] = "aeiouAEIOU";
    for(int i=0; i < n && str[i]!='\0'; i++){
        if(strchr(vowels, str[i]))
            strnset(str+i, '*', 1);
    }
}
