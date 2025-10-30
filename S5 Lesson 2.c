#include <stdio.h>

int main() {
    float a, b, x;

    printf("Nhap so a: ");
    scanf("%f", &a);
    printf("Nhap so b: ");
    scanf("%f", &b);

    if (a == 0 && b == 0) {
    	printf("Phuong trinh co vo so nghiem\n"); 
	}  else if (a == 0 && b != 0){ 
	    printf("Phuong trinh vo nghiem\n");
	} else if (a != 0 && b != 0) {
          x = -b / a;
        printf("Phuong trinh co nghiem x = %.2f\n", x);
	} else {
    	printf("khong hop le!");
	}

    return 0;
} 

