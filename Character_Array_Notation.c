/*######################################################################
#                       Character Array Notation                       #
########################################################################
#                              Sinwindie                               #
########################################################################
# Program will prompt the user for a line of text up to 50 characters. #
# It will then output the text in all uppercase letters and once again #
# in all lower case letters.                                           #
########################################################################
#                    Last Updated: October, 28 2018                    #
######################################################################*/

#include <stdio.h>
#include <ctype.h>

int main(void)	/* begin main*/
{ 	
	/* Function Prototypes */
	
	void safer_gets (char array[], int max_chars);
	
	/* Variable Declarations */
	
	char text[51];					/* Holds characters entered by user */
	char *text_ptr;					/* Pointer to characters entered by user */
	char c;							/* For clearing input buffer */
	int count = 0;					/* Counter for looping */
	
	/* Prints introductory lines and asks for user input */
	
	printf("Welcome to the Character Array Notation program.\n");
	printf("\nEnter a line of text (up to 50 characters): ");
	
	/*Takes user input and assigns it to text[50] using safe_gets */
		
	safer_gets(text, 50);

	/* Prints user entered text in all uppercase characters */
	
	printf("\nThe line of text in uppercase is:\n");
	
	for(text_ptr = text; *text_ptr != '\0'; text_ptr++)
		putchar(toupper(*text_ptr));

	/* Prints user entered text in all lowercase characters */
	
	printf("\n\nThe line of text in lowercase is:\n");
	
	for(text_ptr = text; *text_ptr != '\0'; text_ptr++)
		putchar(tolower(*text_ptr));
	
	/* Prints closing message */
	
	printf("\n\nThank you for using the Character Array Notation program.\n\n");
	
	/* Ensures output screen isn't erased too fast when using other compilers */
	
	getchar();
	return 0;

} /* end main */

/*------------------------------------------------------------------------------
safer_gets checks string data taken as input to prevent overflow caused by the 
user entering more characters than is permitted.
------------------------------------------------------------------------------*/

void safer_gets (char array[], int max_chars)
{ /* Begin safer_gets */
	
  /* Variable Declarations */

  int i;

  /* Read info from input buffer, character by character,   */
  /* up until the maximum number of possible characters.    */
  /* ------------------------------------------------------ */

  for (i = 0; i < max_chars; i++)
  { /* Begin for */
  
     array[i] = getchar();

     /* If "this" character is the carriage return, exit loop */
     /* ----------------------------------------------------- */

     if (array[i] == '\n')
        break;
  
   } /* end for */

   /* If we have pulled out the most we can based on the size of array, */
   /* and, if there are more chars in the input buffer,                 */
   /* clear out the remaining chars in the buffer.                      */
   /* ----------------------------------------------------------------  */

   if (i == max_chars )

     if (array[i] != '\n')
       while (getchar() != '\n');

   /* At this point, i is pointing to the element after the last character */
   /* in the string. Terminate the string with the null terminator.        */
   /* -------------------------------------------------------------------- */

   array[i] = '\0';
 
} /* end safer_gets */
