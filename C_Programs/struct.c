#include<stdio.h>
#include<string.h>

struct car{
    char name[30];
    int horspower;
};

int main(){
    // struct = collection of related members ( variables )
    //          they can be of different data types
    //          listed under 1 name in a block of memory
    //          VERY SIMILAR to classes in other languages ( but no methods )

    struct car car1;
    struct car car2;

    strcpy(car1.name,"Buggati Chiron");
    car1.horspower = 2600;
    strcpy(car2.name,"Lamborghini Aventador");
    car2.horspower = 1800;

    printf("\nCar 1 : %s ,%d",car1.name,car1.horspower);
    printf("\nCar 2 : %s ,%d",car2.name,car2.horspower);
    return 0;
}