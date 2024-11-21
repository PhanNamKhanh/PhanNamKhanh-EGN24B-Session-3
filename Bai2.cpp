#include <stdio.h>
int main(){
    float nhiet_do_c;
    printf("nhap vao nhiet do theo do Celsius ");
    scanf("%f", &nhiet_do_c);
    float nhiet_do_f = nhiet_do_c *1.8 + 32;
    printf("gia tri khi doi sang do Fahrenheit la : %.2f\n", nhiet_do_f);
    return 0;
}
