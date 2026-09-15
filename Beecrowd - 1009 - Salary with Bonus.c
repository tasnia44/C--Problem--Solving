#include <stdio.h>

int main() {

    char JOAO[50];
    double X, Y, TOTAL;
    scanf("%s", &JOAO);
    scanf("%lf", &X);
    scanf("%lf", &Y);
    TOTAL = X + (Y * 0.15);
    printf("TOTAL = R$ %.2lf\n", TOTAL);


    return 0;
}
