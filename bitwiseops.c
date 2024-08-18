#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void checkOddOrEven(int num) {
    if (num & 1) {
        printf("%d is odd.\n", num);
    } else {
        printf("%d is even.\n", num);
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    checkOddOrEven(num);
    return 0;
}
