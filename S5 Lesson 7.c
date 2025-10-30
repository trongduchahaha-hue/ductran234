#include <stdio.h>

int main() {
    char c;
    printf("Nhap mot ky tu:");
    scanf("%c", &c);

    if ('a' <= c && c <= 'z') {
        printf("Ky tu hoa tuong ung: %c\n", c - 32);
    } 
    else if ('A' <= c && c <= 'Z') {
        printf("Ky tu thuong tuong ung: %c\n", c + 32);
    } 
    else {
        printf("Khong phai chu cai.\n");
    }

    return 0;
}

