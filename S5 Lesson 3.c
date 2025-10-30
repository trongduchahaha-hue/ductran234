#include <stdio.h>

int main() {
    float d;
    printf("Nhap diem(d) TB cua quy khach : ");
    scanf("%f", &d);

    if (d < 0 || d > 10) {
        printf("Vui long quy khach nhap diem trong khoang 0 - 10 !\n");
    } 
    else if (d >= 8) {
        printf("Hoc luc gioi\n");
    } 
    else if (d >= 6.5) {
        printf("Hoc luc kha\n");
    } 
    else if (d >= 5) {
        printf("Hoc luc trung binh\n");
    } 
    else {
        printf("Hoc luc yeu\n");
    }

    return 0;
}

