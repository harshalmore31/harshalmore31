#include <stdio.h>
int main() {
    float num1, num2;
    printf("Enter two floating point numbers: ");
    scanf("%f %f", &num1, &num2);
    int dec1 = ((num1 - (int)num1) * 100), dec2 = ((num2 - (int)num2) * 100);
    dec1 == dec2 ? printf("Equal.\n") : printf("Not equal.\n");
    return 0;
}
