// 1. Viết chương trình liệt kê các giá trị chẵn trong mảng một chiều
#include <stdio.h>
int main() {
    int n; // khởi tạo số lượng phần tử có trong mảng
    int arr[100]; // cấp phát giá trị cho mảng

    printf("Nhap so luong phan tu co trong mang mot chieu: ");
    scanf("%d", &n);
    // nhap phan tu trong mang
    printf("Nhap phan tu co trong mang: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Cac gia tri chan co trong mang mot chieu la: ");
     
     // In các giá trị chẵn có trong mảng
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}