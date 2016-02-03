#include<stdio.h>



int main()
{
while(1)
{
 int primzahl = 2;
 int number;
 int array[20];
 int i = 0;
 printf("Geben Sie eine Zahl ein:\n");
 scanf("%d", &number);


 if( (number % primzahl) == 0)
 {
  if( (number / primzahl) == 1)
  {
    array[i] = primzahl;
    printf("Primzahl:%d\n", array[i]);
    i++;
    primzahl++;

  }

 }

 else
 {
    primzahl++;

 }


}







  return 0;
}
