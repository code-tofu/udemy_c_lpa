/*CHALLENGE 126
Write a programme that converts characters to a upper case, writing to a temp file. rename the temp file to the original file name and remove the temp file name

you can use islower function 


*/

#include <stdio.h>
#include <stdlib.h>
#define FILENAME "TestFileIO.txt"
#define TEMPNAME "temp.txt"

int main() {
	//initialise file pointer, remember to initalise to NULL
	FILE *pfile = NULL;
	FILE *ptemp = NULL;
	int c; //unsigned char is an int (i.e. ASCII)

	pfile = fopen(FILENAME,"r");
	if(pfile == NULL){
		perror("FILE: Error in opening file\n");
		return(-1);
	}

	ptemp = fopen(TEMPNAME,"w");
	//fopen will create the file if it doesn't exist
	if(ptemp == NULL){
		perror("TEMP: Error in opening file\n");
		return(-1);
	}

	while ((c = fgetc(pfile)) != EOF){
		if( ('a' <= c) && (c <= 'z') ){
			//printf("%c",(c-32));
			fputc((c-32),ptemp);
		}
		else{
			//printf("%c",c);
			fputc((c),ptemp);
			//fputc((c))

		}
	}

	fclose(pfile);
	pfile = NULL;

	fclose(ptemp);
	ptemp = NULL;
	
	rename("temp.txt","new.txt"); //named as new.txt to retain original else FILENAME
	remove("temp.txt");
	return 0; 
}


/*
The difference between the lower case and the upper case letter is always 32.  For example, the ASCII value of ‘a’ is 97 and ‘A’ is 65. So, a – A = 32.

Remember that C cannot do inequality comparisons at the same time


*/