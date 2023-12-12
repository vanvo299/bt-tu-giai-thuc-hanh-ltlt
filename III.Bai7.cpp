//Bài 7. Viết chương trình kiểm tra ma trận có đối xứng không ?
#include <stdio.h>
int main() {
    int m, n; // khởi tạo số hàng, số cột của ma trận A, m: số hàng, n: số cột
    int mtr[100][100]; // Cấp phát bộ nhớ cho mảng
    printf("Nhap so hang cua ma tran A: ");
    scanf("%d", &m);
    printf("Nhap so cot cua ma tran A: ");
    scanf("%d", &n);

   
    // Nhập ma trận A
    printf("Nhap ma tran A: \n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("mtr_A[%d][%d] = ", i, j);
            scanf("%d", &mtr[i][j]);
        }
    }
    // xuất ma trận 
    printf("Ma tran: \n", n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
           printf("%d ", mtr[i][j]);
        }
        printf("\n"); 
    }
    int check = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (mtr[i][j] != mtr[j][i]) {
                check = 1;
            }
        }
    }
    if (check == 1) {
        printf("Ma tran da cho khong phai ma tran doi xung\n");
    } else printf("Ma tran da cho la ma tran doi xung\n");
    return 0;
}