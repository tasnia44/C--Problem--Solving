#include <stdio.h>

int main() {

    float A, B, C;
    double pi = 3.14159, triangulo, circulo, trapezio, quadrado, retangulo;
    scanf("%f %f %f", &A, &B, &C);
    triangulo = 0.5 * A * C;
    printf("TRIANGULO: %.3lf\n", triangulo);
    circulo = pi * C * C;
    printf("CIRCULO: %.3lf\n", circulo);
    trapezio = 0.5*(A + B) * C;
    printf("TRAPEZIO: %.3lf\n", trapezio);
    quadrado = B * B;
    printf("QUADRADO: %.3lf\n", quadrado);
    retangulo = A * B;
    printf("RETANGULO: %.3lf\n", retangulo);


    return 0;
}
