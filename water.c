#include <stdio.h> 
#include<cs50.h>
int main(void)
{

                    //выводит приветствие
    printf("Привет, введите время в минутах принятия душа\n"); 
int a = GetInt();
 //главная функция

if (a>0)
{
    printf("minutes %d\n", a);
    printf("bottles %d\n", a*12);
 
}

    
}
