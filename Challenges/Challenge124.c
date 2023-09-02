/*CHALLENGE 124
Write a programme to find the total of lines in a text file
create a file that contains some lines of text
use fopen to open the file
use fgetc function to parse charactesr until you get to the EOF
if EOF increment counter to count lines
display as output the total number of lines in the file
compare the character to the line feed, increment the counter
*/

#include <stdio.h>
#include <stdlib.h>
#define FILENAME "TestFileIO.txt"


int main() {
	//initialise file pointer, remember to initalise to NULL
	FILE *pfile = NULL;
	int c; //unsigned char is an int (i.e. ASCII)
	int lines = 0;

	pfile = fopen(FILENAME,"r");
	if(pfile == NULL){
		perror("Error in opening file\n");
		return(-1);
	}

	while ((c = fgetc(pfile)) != EOF){
		if(c == 0x0A ){ //0x0A = '\n'
			printf("next line read\n");
			lines ++;
		}
	}

	printf("Total lines = %d",lines+1);

	fclose(pfile);
	pfile = NULL;
	return(0);
}


/*
The perror() function prints an error message to stderr . If string is not NULL and does not point to a null character, the string pointed to by string is printed to the standard error stream, followed by a colon and a space.

https://www.ibm.com/docs/en/i/7.3?topic=functions-perror-print-error-message

https://www.tutorialspoint.com/c_standard_library/c_function_fgetc.htm
c is next character (an unsigned char)

using define in the header is a good idea

*/