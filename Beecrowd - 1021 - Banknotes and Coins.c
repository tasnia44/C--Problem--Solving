#include <stdio.h>

int main() {

    double N;
    int Cents;
    scanf("%lf",&N);
    Cents = (int)(N * 100+ 0.5);
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", Cents / 10000);
    Cents %= 10000;
    printf("%d nota(s) de R$ 50.00\n", Cents / 5000);
    Cents %= 5000;
    printf("%d nota(s) de R$ 20.00\n", Cents / 2000);
    Cents %= 2000;
    printf("%d nota(s) de R$ 10.00\n", Cents / 1000);
    Cents %= 1000;
    printf("%d nota(s) de R$ 5.00\n", Cents / 500);
    Cents %= 500;
    printf("%d nota(s) de R$ 2.00\n", Cents / 200);
    Cents %= 200;
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", Cents / 100);
    Cents %= 100;
    printf("%d moeda(s) de R$ 0.50\n", Cents / 50);
    Cents %= 50;
    printf("%d moeda(s) de R$ 0.25\n", Cents / 25);
    Cents %= 25;
    printf("%d moeda(s) de R$ 0.10\n", Cents / 10);
    Cents %= 10;
    printf("%d moeda(s) de R$ 0.05\n", Cents / 5);
    Cents %= 5;
    printf("%d moeda(s) de R$ 0.01\n", Cents);


    return 0;
}
