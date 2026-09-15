#include <stdio.h>

int main() {


    float salary, readjustment_rate, new_salary, difference;
    scanf("%f", &salary);
    if(salary >= 0 && salary <= 400)
    {
        readjustment_rate = 0.15;
    }
    else if(salary >= 400.01 && salary <= 800.00)
    {
        readjustment_rate = 0.12;
    }
    else if(salary >= 800.01 && salary <= 1200.00)
    {
        readjustment_rate = 0.1;
    }
    else if(salary >= 1200.01 && salary <= 2000.00)
    {
        readjustment_rate = 0.07;
    }
    else{
        readjustment_rate = 0.04;
    }
    difference = salary * readjustment_rate;
    new_salary = salary + difference;
    printf("Novo salario: %.2f\n", new_salary);
    printf("Reajuste ganho: %.2f\n", difference);
    printf("Em percentual: %.0f %%\n", readjustment_rate * 100);

    return 0;
}
