#include<stdio.h>
#include<string.h>

// typedef char user[25];

typedef struct{
    char name[20];
    int roll;
   // char class[1];
   // char branch[3];
   char class[2];
   char branch[4];
}student;

int main(){
    // typedef = reserved keyword that gives an exsisting datatype a 'nickname'

    student std1 = {"Harshal",231080054,"A","EXCS"};
    student std2 = {"Arnav",231080064,"B","EXCS"};
    student std3 = {"Abhinav",231040054,"A","EXTC"};

    printf(" Std1 \n Name : %s \t Roll : %d \t Class : %s \t Branch : %s \n ",std1.name,std1.roll,std1.class,std1.branch);
    printf("Std2 \n Name : %s \t Roll : %d \t Class : %s \t Branch : %s \n ",std2.name,std2.roll,std2.class,std2.branch);
    printf("Std3 \n Name : %s \t Roll : %d \t Class : %s \t Branch : %s \n ",std3.name,std3.roll,std3.class,std3.branch);
    return 0;
}
