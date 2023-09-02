/* Challenge 108

write a programme thjat allows a user to input a text string (try using fgets to read text input with spaces)
print the text that was input
user can enter the limit of the string they are entering
char pointer only and no character arrays
release the memory that was allocated
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

int userLen = 0;
char * pUserMem = NULL;
//read in the string limit that they are entering
printf("Input length of string\n");
scanf("%d",&userLen);

//malloc the memory needed for the string to ptr
pUserMem = (char *) malloc ((userLen+1) * sizeof(char));
printf("Assigned to %p\n",pUserMem);
// why is there a need to cast to char*? because the pointer is a char* type (default if void)
//do i need to include the null terminator (yes)

//check for NULL
if (!pUserMem) { //NULL is 0  
	printf("Memory Allocation failed");
	exit(0);
}
//'break' statement not in loop or switch statement
else{
	printf("Input String:");
	scanf("%s",pUserMem);
	printf("Your String is: %s",pUserMem);
  //printf takes in a pointer char * for a format specifier %s, https://stackoverflow.com/questions/8019615/strings-and-character-with-printf

}

//release the memory
free(pUserMem);
pUserMem = NULL;
return 0;
}