#include <stdio.h>

int main() {
    double a, b;
    double pole;

    printf("=== Program obliczajacy pole prostokata ===\n\n");


    printf("Podaj dlugosc boku a: ");
    if (scanf("%lf", &a) != 1) {
        printf("Blad: To nie jest liczba!\n");
        return 1;
    }

    printf("Podaj dlugosc boku b: ");
    if (scanf("%lf", &b) != 1) {
        printf("Blad: To nie jest liczba!\n");
        return 1;
    }


    if (a <= 0 || b <= 0) {
        printf("\nBlad: Dlugosci bokow musza byc wieksze od zera!\n");
    } else {

        pole = a * b;
        printf("\nPole prostokata o bokach %.2lf i %.2lf wynosi: %.2lf\n", a, b, pole);
    }

    return 0;
}
