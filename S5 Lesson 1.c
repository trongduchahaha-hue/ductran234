#include <stdio.h>

int main() {
    int number1, number2;

    printf("Nhap vao so nguyen number 1: ");
    scanf("%d", &number1);
    printf("Nhap vao so nguyen number 2: ");
    scanf("%d", &number2);

    if (number1 > number2) {
        printf("So lon hon la: %d\n", number1);
    } else if (number2 > number1) {
        printf("So lon hon la: %d\n", number2);
    } else {
        printf("Hai so bang nhau\n");
    }

    return 0;
}


