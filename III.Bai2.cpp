// Bài 2. Viết chương trình kiểm tra chuỗi nhập vào có đối xứng hay không? 
#include <stdio.h>
#include <string.h>
int main() {
    char chuoi[100]; // khởi tạo chuỗi

    // Nhập chuỗi
    printf("Nhap chuoi: ");
    scanf("%s", &chuoi);

    //printf("%d", strlen(chuoi));

    int check = 0;
    for (int i = 0; i < strlen(chuoi) / 2; i++) {
        if (chuoi[i] != chuoi[strlen(chuoi) - i - 1]) {
            check = 1;
            break;
        }
    }
   if (check == 1) {
        printf("Chuoi ban vua nhap khong la chuoi doi xung\n");
    }
    else printf("Chuoi ban vua nhap la chuoi doi xung\n"); 
    return 0;
}