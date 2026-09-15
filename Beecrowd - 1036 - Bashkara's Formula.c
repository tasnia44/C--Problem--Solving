#include <stdio.h>

int main() {

    double A, B, C, R1, R2, d;
   scanf("%lf %lf %lf", &A, &B, &C);
   d = B * B - 4 * A * C;
   if ( d >= 0 &&  A != 0 )
   {
        R1 = (-B + sqrt(d)) / (2 * A);
        R2 = (-B - sqrt(d)) / (2 * A);
       printf("R1 = %.5lf\n", R1);
       printf("R2 = %.5lf\n", R2);
   }
   else
   {
       printf("Impossivel calcular\n");
   }
    return 0;
}
