#include<stdio.h>
#include<string.h>

int main(){
    char string1[] = "Bro";
    char string2[] = "Bro";

    // strlwr(string1);                // converts a string into lowercase
    // strupr(string2);                // converts a string into uppercase
    // strcat(string1, string2);       // appends string2 to end of string1
    // strncat(string1, string2, 1);   // appends n characters from string2 to string1
    // strcpy(string1, string2);       // copy string2 to string1
    // strncpy(string1, string2, 2);   // copy n characters from string2 to string1

    // strset(string1,'*');            //sets all characters of a string to the given character
    // strnset(string,'x',1);
    // strrev(string1);

    // int result = strlen(string1);    // returns string length as int
     int result = strcmp(string1,string2);    // string compare all characters
    // int result = strncmp(string1,string2, 1);    // string compare n characters
    // int result = strcmpi(string1,string2);    // string compare all (ignore case)
    // int result = strnicmp(string1,string2,1);    // string compare n characters 

    if(result == 0){
        printf("Results are the same ");
    }
    else{
        printf("Results are different ");
    }

     printf("%d\n",result);
  //   printf("%s\n",string2);
    return 0;
}