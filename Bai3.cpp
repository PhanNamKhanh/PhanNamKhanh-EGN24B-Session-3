#include <stdio.h>
int main(){
    float ban_kinh;
    printf("nhap vao ban kinh hinh tron ");
    scanf("%f", &ban_kinh);
    float chu_vi = ban_kinh *2 *3.14;
    float dien_tich = ban_kinh*ban_kinh *3.14;
    printf(" chu vi hinh tron la: %.2f\n dien tich hinh tron la: %.2f\n", chu_vi, dien_tich);
    
    return 0;
}
