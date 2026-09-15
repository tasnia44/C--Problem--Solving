#include <stdio.h>

int main() {

   int T, V;
   double fuel;
   scanf("%d", &T);
   scanf("%d", &V);
   fuel = (V * T) / 12.00;
   printf("%.3lf\n", fuel);

   return 0;
}
