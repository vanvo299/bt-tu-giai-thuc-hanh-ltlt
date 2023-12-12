// Bài 3. Viết chương trình liệt kê các vị trí các giá trị âm trong mảng 1 chiều thực  
#include <stdio.h>
int main() {
    int n; // khởi tạo số lượng phần tử có trong mảng
    int arr[100]; // cấp phát phạm vi cho mảng

    // Nhập mảng
    printf("Nhap so luong phan tu co trong mang: ");
    scanf("%d", &n);

    //Nhập mảng
    printf("Nhap phan tu trong mang: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // In vị trí các giá trị âm trong mảng 1 chiều
    printf("Vi tri cac gia tri am trong mang 1 chieu la: ");
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            printf("%d ", i);
        }
    }
    return 0;
}