#include <stdio.h>

int main() {

  float A, B, C, Perimeter, Area;
    scanf("%f %f %f", &A, &B, &C);
    if(A + B > C && B + C > A && C + A > B)
    {
        Perimeter = A + B + C;
        printf("Perimetro = %.1f\n", Perimeter);
    }
    else{
        Area = (A + B) / 2 * C;
        printf("Area = %.1f\n", Area);
    }

    return 0;
}
