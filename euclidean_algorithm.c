#include<stdio.h>
#include<stdlib.h>
#define NULL_NUMBER 0


int main()
{

while (1)
{
//////////////////////////////////////////////////////////////////////////////////////////
  ///Declaration

  int zahl1 = 0,zahl2 = 0, temp = 0, modulo = 0;
  int memory_zahl1, memory_zahl2, the_last_formula;
  int counter_i = 0;
  int counter_qi = 0;
  int counter_ai = 2; //Because the two first are 0 and 1
  int counter_bi = 2; //Because the two first are 0 and 1
  //int i = 0;
  int qi[30];
  int ai[30] = {0, 1};
  int bi[30] = {1, 0};
//////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////SPACE/////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////////
  ///Input with the two numbers

  printf("Geben Sie die erste Zahl ein:\n");

  scanf("%d", &zahl1);
  printf("Geben Sie die zweite Zahl ein:\n");
  scanf("%d", &zahl2);


//////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////SPACE/////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
///Zahl1 must be bigger than Zahl2
  if(zahl1 < zahl2)
  {
    temp = zahl1;
    zahl1 = zahl2;
    zahl2 = temp;
    //printf("Zahl1_neu: %d, Zahl2_neu:%d\n\n", zahl1, zahl2);
  }
  memory_zahl1 = zahl1;
  memory_zahl2 = zahl2;
  if( (zahl1 == 0) || (zahl2 == 0) )
  {
    printf("Say no to NULL\n");
   return NULL_NUMBER;

  }
//////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////SPACE/////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////////
  ///Step1
  do
  {


    modulo = zahl1 % zahl2;
    qi[counter_qi] = zahl1 / zahl2; //We need qi for the euklid algorithm
    counter_qi++;
    counter_i++;
    zahl1 = modulo;
    //printf("Zahl1_step1:%d, Zahl2_step1:%d\n", zahl1, zahl2);

    if((zahl2 ==0 ) || (zahl1 == 0 ))
    {
      break;
    }
//////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////SPACE/////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////////
    ///Step2
    modulo = zahl2 % zahl1;
    qi[counter_qi] = zahl2 / zahl1;

    counter_qi++;
    counter_i++;
    zahl2 = modulo;
    //printf("Zahl2_step2:%d, Zahl1_step2:%d\n", zahl2, zahl1);
    if((zahl2 ==0 ) || (zahl1 == 0 ))
    {
      break;
    }

  }while(1);
//////////////////////////////////////////////////////////////////////////////////////////






/* Output_when you want to control the datas


  printf("Counter_qi:%d\n", counter_qi);
  printf("Counter_i:%d\n", counter_i);
  printf("Counter_ai:%d\n", counter_ai);
  printf("Counter_bi:%d\n", counter_bi);


  for(i = 0;i <= counter_qi -1;i++)
  {
    printf("Array_qi:%d\n", qi[i]);

  }
*/

//////////////////////////////////////////////////////////////////////////////////////////
  ///Euklid Algorithm for ai!!!

  counter_qi = 0;
  for(; counter_ai <= counter_i;)
  {
   ai[counter_ai] = ai[counter_ai-2] - (ai[counter_ai-1] * qi[counter_qi]); //Look at the formula
    //printf("Array_ai:%d\n", ai[counter_ai]);
   counter_ai++;
   counter_qi++;


  }



  ///Euklid Algorithm for bi!!!
  counter_qi = 0;
  for(;counter_bi <= counter_i;)
  {
      bi[counter_bi] = bi[counter_bi -2] - (bi[counter_bi -1] * qi[counter_qi]);//Look at the formula
      //printf("Array_ai:%d\n", bi[counter_bi]);
      counter_bi++;
      counter_qi++;

  }
//////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////SPACE/////////////////////////////////////////////////////




//////////////////////////////////////////////////////////////////////////////////////////
  ///The Last formula!!!!
  the_last_formula = (ai[counter_ai -1] * memory_zahl2) + (bi[counter_bi -1] * memory_zahl1);

   if(zahl1 == 0)
   {
     printf("Der ggT(%d,%d) = %d\n", memory_zahl1, memory_zahl2, zahl2);
   }

   if(zahl2 == 0)
   {
      printf("Der ggT(%d,%d) = %d\n", memory_zahl1, memory_zahl2, zahl1);
   }

   printf("a%d = %d, b%d = %d\n", counter_i -1, ai[counter_ai -1], counter_i -1, bi[counter_bi -1]);
   printf("(%d * %d) + (%d * %d) = %d\n", ai[counter_ai-1], memory_zahl2, bi[counter_bi -1], memory_zahl1, the_last_formula);
   printf("©Alex Frewein\n");



//////////////////////////////////////////////////////////////////////////////////////////

}


  return 0;
}
