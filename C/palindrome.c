//Write a function to check given integer is Palindrome number or not

#include <stdio.h>

int is_palindrome(int n)
{
    int rev = 0, temp = n;
    while (n > 0)
    {
        rev = rev * 10 + n % 10; // n=121 rev=0*10+1=1 n=12 rev=1*10+2=12 n=1 rev=12*10+1=121
        n = n / 10;
    }
    if (temp == rev)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (is_palindrome(n))
        printf("%d is a palindrome number", n);
    else
        printf("%d is not a palindrome number", n);
    return 0;
}