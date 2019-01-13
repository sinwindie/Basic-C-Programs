/*######################################################################
#                           MPG Calculator                             #
########################################################################
#                             Sinwindie                                #
########################################################################
# Program will ask the user for the total miles driven and the  number #
# of gallons of gas used for three tanks of gas. The program then will #
# calculate and display the individual mileage per tank and the overall#
# milage (calculated by gallons divided by miles) of the three tanks.  #
########################################################################
#                   Last Updated: February 25, 2018                    #
######################################################################*/

#include <stdio.h>

int main(void)    /* begin main*/
{
    /* Variable Declarations */
   
    char c;                      /* For clearing input buffer*/
    int count = 1;               /* Counter variable for while loop */
    float miles = 0;             /* Holds number of miles driven in one tank */
    float gallons = 0;           /* Holds gallons of gas used in one tank */
    float totalmiles = 0;        /* Holds total number of miles driven */
    float totalgallons = 0;      /* Holds total gallons of gas used */
   
    /* Prints introductory lines to screen with blank line between them*/
   
    printf("Welcome to the mileage calculator.\n" );
    printf("\nThis program will calculate the miles per gallon for you for ");
    printf("three tanks of gas after you have entered the gallons used and ");
    printf("miles driven. \n");   
   
    while (count <= 3) /* Begins while loop, will loop 3 times */
    {
        /* Prints line asking user for input for number of gallons used */
       
        printf("\nEnter the number of gallons used for tank #%i: ", count);
       
        /*Takes user input at assigns it to the gallons variable */
       
        scanf("%f", &gallons);
        while((c = getchar() != '\n') && c != EOF);    /* Clears input buffer */
       
               
        /* Prints line asking user for input for number of gallons used */
       
        printf("Enter the number of miles driven: ");
       
        /*Takes user input at assigns it to the gallons variable */
       
        scanf("%f", &miles);
        while( (c = getchar() != '\n') && c != EOF);   /* Clears input buffer */
       
        /* Ensures portability for scanf function */
       
        /* Prints the miles per gallon for individual tank */
       
        printf("***The miles per gallon for this tank is: %.2f\n", miles/gallons);       
       
        /* Adds gallons used and miles driven to their total variables */
       
        totalmiles += miles;
        totalgallons += gallons;
       
        /* Increments loop counter by one */
       
        count++;
       
    }/* Ends while loop */
   
    /* Prints the overall miles per gallon for three tanks to the user */
   
    printf("\nThe overall miles per gallon for three tanks is: %.2f\n",
    totalmiles/totalgallons);   
   
    /* Prints goodbye message to the user */   
   
    printf("\nThank you for using the program. Goodbye.\n\n");

    /*Ensures output screen isn't erased too fast when using other compilers*/
   
    getchar();
    return 0;
   
} /* end main */
