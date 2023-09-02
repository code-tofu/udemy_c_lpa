/* Challenge 92
Write a program that creates an integer variable with a hard-coded value
assign that variables address to a point variable
- create the integer first to get the memory
- create a pointer, initialise to null, and assign the int to the pointer using &

display as outut the address of thepointer, value of the pointer, and value of what the pointer is pointing to

*/

#include <stdio.h>
#include <stddef.h>

int main(){
	int userVar = 420;
	int * p_userVarN = NULL;
  p_userVarN = &userVar; //declaring NULL pointer first then assigning
	int * p_userVar = &userVar; //direct declaration and assigning

	printf("Address of pointer p_userVar: %p\n",(void*)&p_userVar);
	printf("Address of variable userVar using pointer (value of p_userVar): %p\n",p_userVar); //note there is no & (i.e %p reads the hex of p_userVar)
	printf("Address of variable userVar using &: %p\n",&userVar);
	printf("Value of userVar using dereference: %d\n", *p_userVar);
  	printf("Value of userVar using variable: %d\n", userVar);

	return 0;
}