#include<stdio.h>
#include<cs50.h>

int main(void)
{
  int h, i, j;
  // запрос высоты
  do
  {
  printf("введите высоту пирамиды  h от 0 до 23\n ");
      h=GetInt();
  }
    while((h<0) || (h>23));
    // печать линий
       for (i=0; i<h;++i)
          {for (j=0; j<=h;++j)
             {if (j<h-1-i)
              printf(" ");
              else
              printf("#");
             }
        printf("\n");
          }
 }     
  

