#include <stdio.h>
#include <stdio.h>

int main() {
    float phuCap, thuong, luong, heSoLuong;
    int ngayCong, chucVu;

    printf("Nhap he so luong: ");
    scanf("%f", &heSoLuong);
    printf("Nhap so ngay cong: ");
    scanf("%d", &ngayCong);
    printf("Nhap chuc vu (1-Nhan vien, 2-To truong, 3-Quan ly): ");
    scanf("%d", &chucVu);

    if (chucVu == 1) {
	   phuCap = 500000;
	} else if (chucVu == 2) { 
	   phuCap = 1000000;
	} else if (chucVu == 3) {
	   phuCap = 2000000;
	} else {
        printf("Chuc vu khong hop le!");
        return 0;
    } 
    
    if (ngayCong > 26){
	   thuong = (ngayCong - 26) * 200000;
	}
   
   luong = ngayCong * 160000 * heSoLuong + phuCap + thuong;

    printf("Luong = %.0fVND", luong);

    return 0;
}


