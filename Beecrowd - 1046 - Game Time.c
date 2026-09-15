#include <stdio.h>

int main() {
 int s, e, time_spend;
    scanf("%d %d", &s, &e);
    if(e > s)
    {
       time_spend = e - s;
    }
    else if(e < s)
    {
        time_spend = (24 - s) + e;
    }
    else{
        time_spend = 24;
    }
     printf("O JOGO DUROU %d HORA(S)\n", time_spend);

    return 0;
}
