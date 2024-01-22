//WAP to search given character in the string. 
//If it is present, display its frequency. If it is not present then display frequency = 0

#include<stdio.h>

int main(){
    char string[100];
    char search;
    int count = 0;
    printf("Enter the string : ");
    gets(string);
    printf("Enter Charachter to search: ");
    scanf("%c",&search);
    for(int i=0;i<strlen(string);i++){
        if(search==string[i]){
            count  = count + 1;
        }
    }
    printf("Frequency of %c character is %d",search,count);
    return 0;
}
