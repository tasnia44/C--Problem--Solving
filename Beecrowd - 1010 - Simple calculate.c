#include <stdio.h>

int main() {

    int A, B, D, E;
    float C, F, amount;
    scanf("%d %d %f", &A, &B, &C);
    scanf("%d %d %f", &D, &E, &F);
    amount = (C * B + F * E);
    printf("VALOR A PAGAR: R$ %.2f\n", amount);


    return 0;
}
