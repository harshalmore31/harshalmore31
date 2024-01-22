#include<stdio.h>

void pointer(int *page){
    printf("Value of pAge : %d\n",*page);
}

int main(){
    // pointers = a variable like refrence that holds a memory address to another variable, array, etc. 
    // some tasks are performed more easily with pointers
    //   * = indirection operator ( value at address )
    int age = 18;
    int *page = NULL;    //good practice to assign NULL if declaring a pointer
    page = &age;

    printf("Address of age : %p\n",&age);
    printf("Address of pAge : %p\n",page);

    printf("Size of age %d bytes\n",sizeof(age));
    printf("Size of pAge %d bytes\n",sizeof(page));

    printf("Value of age : %d\n",age);
    printf("Value of pAge : %d\n",*page);    // dereferencing

    pointer(page);
    return 0;
}