#include <stdio.h>

int main() {
    float number1, number2, numberX;
    char n;
    printf("Nhap vao so number1: ");
    scanf("%f", &number1);
    printf("Nhap vao so number2: ");
    scanf("%f", &number2);
    printf("Nhap vao 1 toan tu (+, -, *, /): ");
    scanf(" %c", &n); 

    switch (n) {
        case '+':
            numberX = number1 + number2;
            printf("Ket qua: %.2f\n", numberX);
            break;
        case '-':
            numberX = number1 - number2;
            printf("Ket qua: %.2f\n", numberX);
            break;
        case '*':
            numberX = number1 * number2;
            printf("Ket qua: %.2f\n", numberX);
            break;
        case '/':
            if (number2 == 0) {
                printf("Loi: Khong the chia cho 0\n");
            } 
		    else {
                numberX = number1 / number2;
              printf("Ket qua: %.2f\n", numberX);
            }
            break;
        default:
            printf("Loi: Toan tu khong hop le\n");
    }

    return 0;
}



