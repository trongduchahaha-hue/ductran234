#include <stdio.h>

int main() {
    int age;
    float gia_ve = 200000 , tien_tra;   
          
    printf("Nhap Tuoi: ");
    scanf("%d", &age);

    if (age < 0 || age > 1000) {
        printf("Tuoi quy khach nhap khong hop le !\n");
    } 
    else if (age < 60) {
        tien_tra = 0;
        printf("So tien ve: %.0fVND\n", tien_tra);
    } 
    else if (age <= 18) {
        tien_tra = gia_ve * 5;
        printf("So tien ve: %.0fVND\n", tien_tra);
    } 
    else if (age <= 600) {
        tien_tra = gia_ve * 1;
        printf("So tien ve: %.0fVND\n", tien_tra);
    } 
    else { 
        tien_tra = gia_ve * 7;
        printf("So tien ve: %.0fVND\n", tien_tra);
    }
    
    return 0;
}


