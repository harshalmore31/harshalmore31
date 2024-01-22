#include<stdio.h>

int main(){
    FILE *pf = fopen("C:\\Users\\harsh\\OneDrive\\Desktop\\ref.txt","r");
    char buffer[255];
    if(pf == NULL){
        printf("Error");
    }
    else{
        while(fgets(buffer,255,pf)!=NULL){
        printf("%s",buffer);
    }
    fclose(pf);
    } 
    return 0;
}