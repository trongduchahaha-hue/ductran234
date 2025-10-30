#include <stdio.h>
#include <math.h>

int main() {
    int kwh, loai;
    float tien , phuPhi, tongTien;
    printf("Nhap so dien tieu thu (kWh): ");
    scanf("%d", &kwh);
    printf("Nhap loai ho tieu dung (1-Gia dinh, 2-Kinh doanh, 3-San xuat): ");
    scanf("%d", &loai);

    if (kwh <= 50) {
	     tien = kwh * 1500;
	} else if (kwh <= 100) {
         tien = 50 * 1500 + (kwh - 50) * 2000;
	} else if (kwh <= 200) { 
	     tien = 50 * 1500 + 50 * 2000 + (kwh - 100) * 2500;
	} else { 
	     tien = 50 * 1500 + 50 * 2000 + 100 * 2500 + (kwh - 200) * 3000;
	}
        
   if (loai == 1) {
   	 phuPhi = tien * 0.05;   // Ho gia dinh
    } else if (loai == 2) { 
	     phuPhi = tien * 0.05;   // Ho gia dinh
	} else if (loai == 3) { 
	     phuPhi = tien * 0.08;   // Ho san xuat
	} else {
         printf("Loai ho khong hop le!"); 
      return 0;
    }
        tongTien = tien + phuPhi;
        
    printf("Tien dien phai tra: %.0fVND\n", tongTien);

    return 0;
}  
   
   

