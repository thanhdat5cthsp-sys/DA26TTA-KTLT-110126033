#include <stdio.h>
#include <stdlib.h>
int main() {
    int a, b;

    // Nhập vào 2 số nguyên
    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &b);

    // Tính toán và xuất kết quả
    printf("\n--- KET QUA ---\n");
    printf("Tong: %d + %d = %d\n", a, b, a + b);
    printf("Hieu: %d - %d = %d\n", a, b, a - b);
    printf("Tich: %d * %d = %d\n", a, b, a * b);

    // Kiểm tra điều kiện chia cho 0 trước khi tính thương
    if (b != 0) {
        printf("Thuong: %d / %d = %.2f\n", a, b, (float)a / b);
    } else {
        printf("Thuong: Khong the chia cho 0!\n");
    }

    return 0;
}
