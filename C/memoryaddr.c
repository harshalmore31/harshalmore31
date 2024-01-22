#include<stdio.h>

int main(){
    // memory = an array of bytes within the RAM (streeet)
    // memory block = a single unit (byte) within memory, used to hold some value (person)
    // memory address = where the memory block is located (house address)

    char a;
    short b[3];

    printf("%d bytes in memory\n", sizeof(a));
    printf("%d bytes in memory\n", sizeof(b));  

    printf("%p\n",&a);
    printf("%p\n",&b);
    return 0;
}