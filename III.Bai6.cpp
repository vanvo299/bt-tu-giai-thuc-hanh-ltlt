// Bài 6. Viết chương trình tìm phần tử lớn nhất của ma trận vuông 
#include <stdio.h>
int main() {
    int m, n; // khởi tạo số hàng, số cột của ma trận A, m: số hàng, n: số cột
    int mtr[100][100]; // Cấp phát bộ nhớ cho mảng
    printf("Nhap so hang cua ma tran A: ");
    scanf("%d", &m);
    printf("Nhap so cot cua ma tran A: ");
    scanf("%d", &n);

    if (m != n) {
        printf("Day la ma tran vuong, vui long nhap so hang = so cot (m = n)!!!!");
        return 1;
    }
    // Nhập ma trận A
    printf("Nhap ma tran A: \n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("mtr_A[%d][%d] = ", i, j);
            scanf("%d", &mtr[i][j]);
        }
    }
    // xuất ma trận 
    printf("Ma tran vuong cap %d la: \n", n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
           printf("%d ", mtr[i][j]);
        }
        printf("\n"); 
    }
    // tìm phần tử lớn nhất trong ma trận
    int max_ptr = mtr[0][0];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (mtr[i][j] > max_ptr) {
                max_ptr = mtr[i][j];
            }
        }
    }
    printf("Phan tu lon nhat trong ma tran vuong la: ");
     printf("%d", max_ptr);

       
    return 0;
}