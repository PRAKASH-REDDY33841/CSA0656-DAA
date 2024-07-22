#include <stdio.h>

unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int num;
    printf("R.Gnana Prakash - 192211740\n");
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Check if the number is negative
    if (num < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        printf("Factorial of %d is %llu\n", num, factorial(num));
    }
    
    return 0;
}
