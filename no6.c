// Menerima masukan sebuah variabel dengan format int dan char kemudian
// menampilkannya kembali

#include <stdio.h>
int main(){
    int a;
    char b;

    printf("Input integer:");
    scanf("%d",&a);
    printf("input karakter:");
    scanf(" %c",&b);

    printf("\ninteger yang di imput adalah : %d\n", a);
    printf("karakter yang di imput adalah : %c\n", b);

    return 0;
}