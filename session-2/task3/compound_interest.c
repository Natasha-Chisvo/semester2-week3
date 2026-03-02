
/*
 * Compute the final result of applying compound interest 
 * to a given deposit with a set interest rate and term.
 * We will assume interest is applied at the end of each year.
 */

#include <stdio.h>
#include <math.h>

int main( void ) {

    float deposit = 120.0;  // initial deposit
    float rate = 0.05;      // interest rate
    int term = 5;           // number of years
    float final_amount;
    float gain;

    /*
     * Implement the formula for compound interest.
     * Print out the final amount and the gain compared to the initial deposit.
     */

     float *pdeposit;
     float *prate;
     int *pterm;
     float *pfinal;
     float *pgain;



     pdeposit = &deposit;
     prate = &rate;
     pterm = &term;
     pfinal = &final_amount;
     pgain = &gain;

     //year amount
     while (*pterm > 0){
        int yearcount;
        yearcount += 1;
        *pgain = (*pdeposit) * (*prate);
        printf("year %i : %.2f gain :  %.2f \n", (yearcount) , (*pdeposit) , (*pgain));
        *pterm = *pterm - 1;

        //change value per year

        *pdeposit = *pdeposit + *pgain;

     }

     //printf("Your compunt interst is : %f \n", (*pfinal) );
    

    return 0;
}
