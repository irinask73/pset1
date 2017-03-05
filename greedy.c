#include<stdio.h>
#include<cs50.h>
#include <math.h>
int main(void)
 {
     float n =0.01;
     int count = 0, cents;
       do
       {
         printf("How much change is owed?\n");
         n = GetFloat();
        }
        while (n < 0);
    // перевод в центы
     n=n* 100.0;
     cents = (int) round(n);
     // проверка номинала
        while (cents >= 25)
        {
         count++;
         cents=cents-25;
        }
        while (cents>= 10)
        {
         count++;
         cents=cents-10;
        }
        while (cents >= 5)
        {
         count++;
         cents=cents-5;
        }
        while (cents>= 1)
        {
         count++;
         cents=cents-1;
        }
     printf("%d\n", count);

     return 0;
 }
