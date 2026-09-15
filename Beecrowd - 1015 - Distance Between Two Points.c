#include <stdio.h>

int main() {

     float X1, Y1, X2, Y2;
    double Distance;
    scanf("%f %f %f %f", &X1, &Y1, &X2, &Y2);
    Distance= sqrt(pow(X2 - X1, 2) + pow(Y2 - Y1, 2));
    printf("%.4lf\n", Distance);


    return 0;
}
