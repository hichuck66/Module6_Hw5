/*
 * =====================================================================================
 *
 *       Filename:  jpsi_Hw5_Task1.c
 *       	Usage:  ./jpsi_Hw5_Task1.c
 *    Description:  Calculating the second inertia, given radius of inside and outside
 *
 *        Version:  1.0
 *        Created:  02/14/2017 04:37:31 PM
 *       Compiler:  gcc -Wall -Werror -lm (presence of math.h)
 *         Author:  Chikere-Njoku Chibuike (), cchikerenjoku@mail.weber.edu
 * =====================================================================================
 
 //For standard I/O */

#include <stdio.h>
#include <math.h>
#define pi 3.14159265359

/* Function Prototypes */
//declare function//

void AnnulusMoment(double, double);

/* Main Program */
int main(void)
{

	double Rout, Rin;

printf("\nEnter the value of outer radius(Rout): ");
scanf("%lf", &Rout);

printf("\nNow enter the value for the inner radius(Rin): ");
scanf("%lf", &Rin);

AnnulusMoment(Rout, Rin); //calling the function//

	return 0;
}

/* Function Definitions */


void AnnulusMoment(double Rout, double Rin)
{
float I;

I = (pi/4 * (pow(Rout,4) - pow(Rin,4)));

printf("\nThe second moment of inertia is %lf\n\n", I);

printf("DONE");

return;
}





