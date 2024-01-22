// Write a code for arrays of struct

#include<stdio.h>

struct student{
    char name[25];
    float gpa;
};

int main(){
    struct student std1 = {"Harshal More",10.0};
    struct student std2 = {"Arnav Sonawane",6.99};
    struct student std3 = {"Aditya Deshmukh",8.25};
    struct student std4 = {"Raj Mali",9.25};

    struct student students[] = {std1,std2,std3,std4};

    for(int i=0;i<sizeof(students)/sizeof(students[0]);i++){
        printf("%.12s\t%.2f\n",students[i].name,students[i].gpa);
        // Here %.12 for only 12 characters output, it counts spaces lso
        // %.2f for output upto 2 decimals after point
    }
    return 0;
 }
