
#include <stdio.h>
#include <math.h>

/*
 * Potrfolio submission
 * Name: Natasha Chisvo
 * ID: 201553125
 */

 int main( void ) {


   //defined variables
   int salary = 50000;
   float NI = 10;
   int tax = 0;

   float contribution;
   float takehome;


   //creating pointers

   int *psalary;
   float *pni;
   int *ptax;

   float *pcontribution;
   float *ptakehome;

   //creating pointer link -- pointer -> adress

   psalary = &salary;
   pni = &NI;
   ptax = &tax;

   pcontribution = &contribution;
   ptakehome = &takehome;


   // calculate dedcutions:
   // salary - ni = before tax

   float deduction1;
   float beforetax;

   deduction1 = ((*psalary) * (*pni/100));
   beforetax = (*psalary) - deduction1;
   
   // calculate take home pay:
   if (beforetax > 12500) {

      int taxxed;
      float taxamo; 

      //tax calc:
      taxxed = (*psalary - 12500);
      taxamo = ((taxxed) * ((*ptax)/100));


      *ptakehome = beforetax - taxamo;
      *pcontribution = deduction1 + taxamo;

   }
   else{
     *pcontribution = deduction1;
     *ptakehome = beforetax;

   }
   
    printf("Salary £%i\n",*psalary);
    printf("NI contribution £%.2f\n",*pni);
    printf("Tax contribution £%.2f\n",*pcontribution);
    printf("Take home salary £%.2f\n",*ptakehome);






   






    // define and initialise variables for the problem data 

    // calculate the deductions and final take-home salary

    // Use only these print statement with appropriate formatting and variable names
    //printf("Salary £...",var_name);
    //printf("NI contribution £...",var_name);
    //printf("Tax contribution £...",var_name);
    //printf("Take home salary £...",var_name);

    return 0;
 }