/* Challenge 82

write a program that displays a string in reverse order
should read input from the keyboard
need to use the strlen string function

write a programme that sorts the strings of an array using a bubble sort
need to use strcmp and strcopy functions

e.g. number of strings 3, zero, one, two
sorted: one, two, zero

*/


#include <stdio.h>
#include <string.h>

int main() {
    int stringrev(char userstr[]);
    int arrayBubbleSort(char usercarray[20][20],int numstr);
    
    // test str rev function
    //scanf will only read till space. use fgets to read a full length with spaces
    char userinstr[50]={0};
    printf("Input string to be reversed:\n");
    scanf("%s",userinstr);
    printf("Your input:%s\n",userinstr);
    stringrev(userinstr);
    printf("reversed string:%s\n",userinstr);
    

    //read size of string array
    printf("Input number of strings Max 20\n");
    int numstr = 0,i=0;
    scanf("%d",&numstr);

    char usercarray[20][20]= {0};
    for(i=0;i<numstr;i++){
        printf("Input String Max 20 Char:");
        scanf("%s",usercarray[i]);
    }

    printf("Your String Array:\n");
    i=0;
    for (i=0;i<numstr;i++){
        printf("%s\n",usercarray[i]);
    }

    arrayBubbleSort(usercarray,numstr);

    printf("Your sorted String Array:\n");
    i=0;
    for (i=0;i<numstr;i++){
        printf("%s\n",usercarray[i]);
    }


    return 0;
}

// String Reverse Function
int stringrev(char userstr[]){
    int len=0;

    //get length of user string:
    while(userstr[len] != '\0'){
        len++;
    }

    /* Check:
    printf("%d\n",len);
    printf("%c\n",userstr[len-1]);
    // need to figure out the len-1 issue
    */

    int i=0;
    char tempstr[len];
    //printf("%s",tempstr);
    while(userstr[i] != '\0'){
        tempstr[i] = userstr[(len-1-i)];
        i++;
    }
    tempstr[len]= '\0';

    /* Check:
    printf("%s\n",tempstr);
    */
    
    while(len >= 0){
        userstr[(len)]=tempstr[len];
        len--;
    }  
    return 0;
}

int arrayBubbleSort (char usercarray[20][20],int numstr) {
    int swap = 0, unsorted = 1, swapped = 0, i=0;
    char tempstr[20] = {0};
    while(unsorted){
        swapped = 0;
        for(i=0;i<numstr-1;i++){ //has to be-1 if not swaps out of array size due to [i+1]
            swap = strcmp(usercarray[i],usercarray[i+1]);
            if(swap>0){
                strcpy(tempstr,usercarray[i]);
                strcpy(usercarray[i],usercarray[i+1]);
                strcpy(usercarray[i+1],tempstr);
                swapped = 1;
            }
            // strncpy vs strcpy? strncmp vs strn py?
            //str to prevent buffer overflow
        }
        if(swapped == 0){
        unsorted = 0;
        }
    }
    return 0;
}

/*
0	if strings are equal
>0	if the first non-matching character in str1 is greater (in ASCII) than that of str2.
<0	if the first non-matching character in str1 is lower (in ASCII) than that of str2
*/



/*
https://www.programiz.com/c-programming/library-function/string.h/strcmp
https://www.programiz.com/c-programming/c-strings

define
printf("Input Strings")
strcmp(userStrArray[i]

char usercarray[numstr][20]= {
"one",
"two",
"three",
"four",
"five",
"six",
"seven",
"eight",
"nine",
"ten"  
};
//has to be 2d array (i.e. 1D arrays of char arrays)

variable-sized object may not be initialized
   35 |     char usercarray[numstr][20]= {0};
*/