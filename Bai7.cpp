#include <stdio.h>
int main(){
    int number_abcd, a, b, c, d, tong;
    printf("nhap vao 1 so nguyen co 4 chu so ");
    scanf("%d", &number_abcd);
    a= number_abcd/1000;
    b= number_abcd%1000/100;
    c= number_abcd%100/10;
    d= number_abcd%10;
    tong= a+b+c+d;
   printf("tong cac chu so trong so la %d\n", tong);
    return 0;
}
