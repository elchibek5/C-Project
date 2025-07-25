#include <stdio.h>

// Function to calculate the square of a number
int square(int n) {
    return n * n;
}

// Function to check if a number is even
int is_even(int n) {
    return n % 2 == 0;
}

int main(void)
{
    printf("Hello World\n");

    int num = 5;
    printf("Square of %d is %d\n", num, square(num));

    if (is_even(num)) {
        printf("%d is even\n", num);
    } else {
        printf("%d is odd\n", num);
    }

    return 0;
}