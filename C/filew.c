#include<stdio.h>

int main(){
    /*
    FILE *fp;
    fp = fopen("filew.txt","w");
    fprintf(fp,"Hello");
    fclose(fp);
    */
   remove("filew.txt")==0 ? printf("File deleted successfully") : printf("File not deleted");
    return 0;
}