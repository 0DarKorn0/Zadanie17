#include <stdio.h>

float cuboid_volume(float a, float b, float h) {
    return (a*b*h);
}

int main(){
    float a, b, h;

    printf("Podaj dlugosc prostopadloscianu: ");
    scanf("%f", &a);

    printf("Podaj szerokosc prostopadloscianu: ");
    scanf("%f", &b);

    printf("Podaj wysokoosc prostopadloscianu: ");
    scanf("%f", &h);

    printf("\n Objetosc prostopadloscianu: %f \n", cuboid_volume(a, b, h));
}
