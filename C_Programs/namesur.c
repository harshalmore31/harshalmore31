//WAP to accept your first name and surname. Join them and display your full name

#include<stdio.h>

int main(){
    char name[25];
    char surname[25];
    printf("Enter your Name : ");
    gets(name);
    printf("Enter your Surname : ");
    gets(surname);
    printf("Full Name : %s",strcat(name,surname));
    return 0;
}