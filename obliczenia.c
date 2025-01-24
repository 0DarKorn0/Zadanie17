#include <stdio.h>
#include <math.h>

float cuboid_volume(float a, float b, float h) {
    return (a * b * h);
}

float sphere_volume(float r) {
    return (4.0 / 3.0) * M_PI * (r * r * r);
}

int main() {
    int choice;

    printf("Wybierz bryle, dla ktorej chcesz obliczyæ objetosc:\n");
    printf("1. Prostopadloscian\n");
    printf("2. Kula\n");
    printf("0. Zakoncz\n");
    printf("Twoj wybor: ");
    scanf("%d", &choice);

    if (choice == 1) {
        float a, b, h;
        printf("Podaj dlugosc prostopadloscianu: ");
        scanf("%f", &a);

        printf("Podaj szerokosc prostopadloscianu: ");
        scanf("%f", &b);

        printf("Podaj wysokosc prostopadloscianu: ");
        scanf("%f", &h);

        printf("\nObjetosc prostopadloscianu: %f\n", cuboid_volume(a, b, h));
    }
    else if (choice == 2) {
        float r;
        printf("Podaj promien kuli: ");
        scanf("%f", &r);

        printf("\nObjetosc kuli: %f\n", sphere_volume(r));
    }
    else if (choice == 0) {
        printf("Program zostaje zakonczony.\n");
    }
    else {
        printf("Nieprawid³owy wybor. Proszê wybraa 1, 2 lub 0.\n");
    }

    return 0;
}
