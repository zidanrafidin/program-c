// Mengisi nilai sebuah variabel float, mengalikan isi variabel tersebut dengan 50 dan
// mencetak hasilnya
#include <stdio.h>

int main() {
    float a, result;
    a = 12.5;
    result = a * 50;

    printf("hasil kali %.2f * 50 adalah = %2.f\n", a, result);

    return 0;
}