/*CHALLENGE 128
Write a programme that prints the contents of a file in reverse order
use the fseek funciton to find end of file
use ftell function to get the position of the file pointer
display as output the file in reverse order

*/

#include <stdio.h>
#include <stdlib.h>
#define FILENAME "TestFileIO.txt"

int main() {
	//initialise file pointer, remember to initalise to NULL
	FILE *pfile = NULL;
	int c; //unsigned char is an int (i.e. ASCII)
	int len = 0;
	int i = 0;
	fpos_t position;

	pfile = fopen(FILENAME,"r");
	if(pfile == NULL){
		perror("FILE: Error in opening file\n");
		return(-1);
	}


	fseek(pfile,0,SEEK_END);
	
	fgetpos(pfile,&position);
	printf("POS:%d\n",position);

	len = ftell(pfile);
	printf("LEN:%d \n",len);

	while (i < len){
		i++; //why at the start
		fseek(pfile,-i,SEEK_END);
		printf("%c",fgetc(pfile));
	}

	fclose(pfile);
	pfile = NULL;
	return 0;
}


/*
The difference between the lower case and the upper case letter is always 32.  For example, the ASCII value of ‘a’ is 97 and ‘A’ is 65. So, a – A = 32.

Remember that C cannot do inequality comparisons at the same time
	while(len>0){
		printf("%c",fgetc(pfile));
		len--;
	}

*/