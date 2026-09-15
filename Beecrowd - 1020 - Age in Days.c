#include <stdio.h>

int main() {

     int age, years, remaining_days, months, days;
    scanf("%d", &age);
    years = age / 365;
    remaining_days = age % 365;
    months = remaining_days / 30;
    days = remaining_days % 30;
    printf("%d ano(s)\n", years);
    printf("%d mes(es)\n", months);
    printf("%d dia(s)\n", days);

    return 0;
}
