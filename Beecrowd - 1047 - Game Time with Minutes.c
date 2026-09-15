#include <stdio.h>

int main() {

     int i_h, i_m, f_h, f_m, time_spend, total_initial_minutes, total_final_minutes, duration_hours, duration_minutes ;
    scanf("%d %d %d %d", &i_h, &i_m, &f_h, &f_m);
    total_initial_minutes = i_h * 60 + i_m;
    total_final_minutes = f_h * 60 + f_m;
    if(total_initial_minutes <  total_final_minutes)
    {
       time_spend = total_final_minutes - total_initial_minutes;
    }
    else if(total_initial_minutes >  total_final_minutes)
    {
        time_spend = (24 * 60 - total_initial_minutes) + total_final_minutes;
    }
    else{
        time_spend = 24 * 60;
    }
    duration_hours = time_spend / 60;
    duration_minutes = time_spend % 60;
     printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duration_hours, duration_minutes);


    return 0;
}
