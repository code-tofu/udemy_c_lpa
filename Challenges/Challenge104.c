/*Challenge 104

Write a Function that squares a number by itself
- input is an int pointer
- dereference value and multiply by itself
- print out the new value of pointer

*/


#include <stdio.h>
void squarenum(int const *pInputNum);

int main() {
  int usernum;
  printf("Input integer to be squared:");
  scanf("%d",&usernum);
  squarenum(&usernum);
  printf("Your number squared is: %d",usernum);
  
}

void squarenum(int const *pInputNum){
  // you can keep the address const instead of const int to keep value constant
  // even if you change the address of the argument, the main variable address will not change (pass by value)
*pInputNum = *pInputNum * *pInputNum;
}