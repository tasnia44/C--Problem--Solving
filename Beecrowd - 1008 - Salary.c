#include <stdio.h>

int main() {

 int A, B, NUMBER;
    float C, SALARY;
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%f", &C);
    NUMBER = A;
    printf("NUMBER = %d\n", NUMBER);
    SALARY = B * C;
    printf ("SALARY = U$ %.2f\n", SALARY);


    return 0;
}
