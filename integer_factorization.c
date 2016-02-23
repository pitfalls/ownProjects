#include<stdio.h>
#include<stdlib.h>
#define FALSE 0
#define TRUE 1



int main()

{



  while(1)
  {
    int number = 0;

    int boolean = FALSE;

    int primzahl_checker = 2;
    int no_primzahl = 0;

    printf("Geben Sie eine Zahl ein!\n");
    scanf("%d", &number);

      while(1)
      {

        if((primzahl_checker == number)  || (primzahl_checker == no_primzahl))
        {
          break;
        }

        if( (number % primzahl_checker) == 0)
        {
          no_primzahl = number / primzahl_checker;
          printf("%d\t", no_primzahl);
           primzahl_checker++;
           boolean = TRUE;
        }

        else{
          primzahl_checker++;
        }


      }

    if(boolean == FALSE)
    {
      printf("\nPrimzahl ist: %d\n", number);
    }

    if(boolean == TRUE)
    {
      printf("\nPrimzahl ist: %d\n", no_primzahl);
    }


  }



  return 0;
}
