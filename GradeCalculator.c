/*######################################################################
#                       Final Grade Calculator                         #
########################################################################
#                              Sinwindie                               #
########################################################################
# Program will prompt the user for the number of grades to enter and   #
# then prompt the user for each grade. Data validation includes the    #
# requirement of at least two grades and a grade between 0-100.        #
########################################################################
#                    Last Updated: March 4, 2018                       #
######################################################################*/

#include <stdio.h>

int main(void)   
{    /* Begin main */

    /* Variable Declarations */
   
    char c;                     /* For clearing input buffer */
    char lettergrade;           /* Holds letter of final grade */
    int count = 1;              /* Counter variable for while loop */
    int numofgrades = 0;        /* Holds number of grades user wants to enter */
    float grade = 0;            /* Holds single grade inputted by user */
    float gradestotal = 0;      /* Holds accumulative of all grades entered */
    int finalgrade = 0;         /* Holds final grade (total/# of grades)
   
    /* Prints introductory lines and number of grades user wishes to enter */
   
    printf("This program calculates the average of as many grades as you wish");
    printf(" to enter.\n" );
    printf("\nFirst, enter the number of grades to process: ");
      
    /*Takes user input at assigns it to number of grades variable */
       
    scanf("%i", &numofgrades);
    while((c = getchar() != '\n') && c != EOF);       /* Clears input buffer */
   
    /* While loop to ensure that user enters at least 2 grades */
   
    while (numofgrades < 2)       
    {    /* Starts while loop */
   
        /* Reprints prompt for number of grades */
       
        printf("\nPlease enter at least two grades.");
        printf("\nEnter the number of grades to process: ");
       
        /*Takes user input at assigns it to number of grades variable */
       
        scanf("%i", &numofgrades);
        while((c = getchar() != '\n') && c != EOF);    /* Clears input buffer */
       
    } /* Ends while loop */
   
    /* Initial prompt asking user to enter grades. */
   
    printf("\nNow enter the %i grades to be averaged.\n\n", numofgrades);
   
    /* Loop which prompts user for their grades one at a time. */
   
    while (count <= numofgrades)       
    {    /* Starts while loop */
           
        printf("Enter grade #%i: ", count);    /* Prompts user for grade */
       
        /*Takes user input at assigns it to total grade variable then
        clears input buffer */
       
        scanf("%f", &grade);
        while((c = getchar() != '\n') && c != EOF);
       
        /* While loop to ensure that user enters grade between 0-100 */
       
        while (grade < 0 || grade > 100)       
        {    /* Starts nested while loop */
   
            /*Reprints prompt for grade */
               
            printf("*** Invalid entry. Grade must be 0 to 100.***");
            printf("\nEnter grade #%i: ", count);
       
            /*Takes user input at assigns it to total grade variable then
            clears input buffer */
       
            scanf("%f", &grade);
            while((c = getchar() != '\n') && c != EOF);
       
        }/* Ends nested while loop */
           
           
        gradestotal += grade;    /* Adds grade to accumulative grade total */
        count++;                /* Increments grade counter */
           
    } /* Ends while loop */   
   
    /* Calculates final grade and rounds to nearest whole number */
   
    finalgrade = (int)(gradestotal / numofgrades + .5);
   
    /* If/Else statements to calculate final grade and assigns letter grade */
   
    if (finalgrade >= 90)
        lettergrade = 'A';                        /* Final grade is an A */
    else if (finalgrade >= 80)
        lettergrade = 'B';                        /* Final grade is an B */
    else if (finalgrade >= 70)
        lettergrade = 'C';                        /* Final grade is an C */   
    else if (finalgrade >= 60)
        lettergrade = 'D';                        /* Final grade is an D */
    else
        lettergrade = 'F';                        /* Final grade is an F */
       
    /* Prints the users final grade and grade letter to screen */
   
    printf("Your average of the %i grades are %i!", numofgrades, finalgrade);
    printf("\nYou made an %c!", lettergrade);
   
    /*Ensures output screen isn't erased too fast when using other compilers*/
   
    getchar();
    return 0;
   
} /* End main */
