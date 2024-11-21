#include <stdio.h>
int main(){
    printf("moi nhap do dai canh va chieu cao cua hinh tam giac ");
    float canh, chieu_cao;
    scanf("%f %f", &canh, &chieu_cao);
    float dien_tich= canh*chieu_cao/2;
    printf("dien tich hinh tam giac la: %.2f\n", dien_tich);
    return 0;
}
