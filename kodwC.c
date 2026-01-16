#include <stdio.h>
#include <math.h> // Potrzebne do uzycia M_PI (liczba Pi)

int main() {
    int wybor;
    double a, b, r, pole;

    printf("=== Program obliczajacy pola figur ===\n\n");

    // Menu wyboru figury (zgodnie z instrukcja)
    printf("Wybierz figure, ktorej pole chcesz obliczyc:\n");
    printf("1. Prostokat\n");
    printf("2. Kolo\n");
    printf("Twoj wybor: ");

    // Sprawdzenie czy wybor jest liczba
    if (scanf("%d", &wybor) != 1) {
        printf("Blad: To nie jest liczba!\n");
        return 1;
    }

    if (wybor == 1) {
        // --- LOGIKA DLA PROSTOKATA (z Twojego oryginalnego kodu) ---
        printf("\n--- Obliczanie pola prostokata ---\n");
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

    } else if (wybor == 2) {
        // --- NOWA LOGIKA DLA KOLA ---
        printf("\n--- Obliczanie pola kola ---\n");
        printf("Podaj promien kola r: ");
        if (scanf("%lf", &r) != 1) {
            printf("Blad: To nie jest liczba!\n");
            return 1;
        }

        if (r <= 0) {
            printf("\nBlad: Promien musi byc wiekszy od zera!\n");
        } else {
            // Wzor na pole kola: Pi * r^2
            pole = M_PI * r * r;
            printf("\nPole kola o promieniu %.2lf wynosi: %.2lf\n", r, pole);
        }

    } else {
        // Obsluga blednego wyboru z menu
        printf("\nBlad: Nieznana opcja. Wybierz 1 lub 2.\n");
    }

    return 0;
}
