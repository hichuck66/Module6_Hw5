/*
 * =====================================================================================
 *
 *       Filename:  jpsi_hw5_task2.c
 *       	Usage:  ./jpsi_hw5_task2.c
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/14/2017 04:37:50 PM
 *       Compiler:  gcc -Wall -Werror
 *         Author:  Raul Rivera (), raulriverapuigweber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */
/* Function Prototypes */

float MakeMilesKmTable(float m);

/* Main Program */ // Task 2 // 
int main(void)
{
	float miles, end, answer,inc;
	printf("Enter the starting miles: \n");
	scanf("%f",&miles);
	printf("Enter the ending miles: \n");
	scanf("%f",&end);
	printf("Enter the increments: \n");
	scanf("%f",&inc);
	int i=0,j=end-miles;       // This is how many times it will print
	printf(" Miles    Kilometers\n");
	printf(" -----    ----------\n");
		while (i<=j)
	{
		answer = MakeMilesKmTable(miles);
		printf("%5.1f   %9.2f\n",miles,answer);
		miles = miles + inc;               // Update the miles it will convert to Km
		i= i + inc;
	}
		printf("\n");          // Style points
	return 0;
}
// Version 1.2

/* Function Defenitions */
float MakeMilesKmTable(float miles) 
{
	float km;
	km = miles * 1.61;
	return km;
}

