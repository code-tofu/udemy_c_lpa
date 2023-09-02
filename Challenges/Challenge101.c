/* Challenge 101

Using pointer arithmetic and const chat pointer

write a function the calculates the legnth of a string
- takes in as a parameter a const char pointer
- determine the length of a string usering pointer arithmetic
- use a while loop using the value of the pointer to exit
- subtract two pointers (one to the end and one to beginning)
- return an int that is the length of the string being passed into the function)

note that null terminator /0 as 0

*/

#include <stdio.h>

int main(){

	int stringlenpoint(const char *pUserString);

	char userstr[25] = {0};
	int strlength = 0;
	
	printf("Input String to be count length\n");
	scanf("%s", userstr);
	strlength = stringlenpoint(userstr);
	printf("Length of %s is %d",userstr,strlength);

	return 0;
}

/*
int stringlenpoint(const char *pUserString){
// you constant cahr *pUserString but stil modified it
char * const pStart = pUserString;

while(*pUserString){
	pUserString++;
}
//dereferencing a null terminator will give 0 (false)

printf("Start %p\n",pStart);
printf("End %p\n",pUserString);

return (pUserString-pStart);
}
*/

int stringlenpoint(const char *pUserString){
char * const pEnd = pUserString;

while(*pEnd){
	pEnd++;
}
//dereferencing a null terminator will give 0 (false)

printf("Start %p\n",pUserString);
printf("End %p\n",pEnd);

return (pEnd-pUserString);
}