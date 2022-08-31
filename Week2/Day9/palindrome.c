#include <stdio.h>

int main() {
    int n, reversed = 0, remainder, n1;
    printf("Enter an integer: ");
    scanf("%d", &n);
    n1 = n;

    // reversed integer is stored in reversed variable
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    // palindrome if orignal and reversed are equal
    if (n1 == reversed)
        printf("%d is a palindrome.", n1);
    else
        printf("%d is not a palindrome.", n1);


    return 0;
}