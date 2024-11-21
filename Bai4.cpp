#include <stdio.h>
int main(){
    float toan, van, anh;
    printf("nhap diem 3 mon toan, van, anh lan luot la ");
    scanf("%f %f %f", &toan, &van, &anh);
    float tong= toan + van + anh, trung_binh= tong/3;
    printf("tong: %.2f\ntrung_binh: %.2f\n", tong, trung_binh);
    
    return 0;
}
