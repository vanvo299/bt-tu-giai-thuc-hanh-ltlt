//Bài 2 (trong file thực hành ktlt). Viết chương trình tính cos(x) triển khai theo chuỗi số sau: 
//S = Cos(x) = 1 - ! 22 x + ! 44 x - ... + (-1)n )! 2 (2nxn
 // Cách làm tương tự như bài 1
 #include <stdio.h>
 #include <math.h>
 //tính giai thừa
 double factorial(double n) {
    double fact = 1.0;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    } return fact;
 }

// tính cosx
double tinh_cosx(double x) {
    double term;
    double cosx = 0.0;
    int n = 0;
    do {
        term = pow(-1, n) * (pow(x, 2*n) / factorial(2*n));
        cosx += term;
        n++;
    } while (fabs(term) > pow(10, -6));
    return cosx;
}

 int main() {
    double x; // khởi tạo biến x
    printf("Nhap x (radian): ");
    scanf("%lf", &x);

    printf("cos%.1lf = %.2lf\n", x, tinh_cosx(x));

    return 0;
 }