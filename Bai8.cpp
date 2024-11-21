#include <stdio.h>
int main(){
    int number_abcd, a, b, c, d, nghich_dao;
    printf("nhap vao 1 so nguyen co 4 chu so ");
    scanf("%d", &number_abcd);
    a= number_abcd/1000;
    b= number_abcd%1000/100;
    c= number_abcd%100/10;
    d= number_abcd%10;
    nghich_dao= d*1000 + c*100 + b*10 +a;
    printf("so nghich dao la %d\n", nghich_dao);
    return 0;
}
