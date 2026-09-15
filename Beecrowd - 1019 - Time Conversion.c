#include <stdio.h>

int main() {

    int N;
    scanf("%d", &N);

    int hours = N / 3600;
    int remaining = N % 3600;
    int minutes = remaining / 60;
    int seconds = remaining % 60;

    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}
