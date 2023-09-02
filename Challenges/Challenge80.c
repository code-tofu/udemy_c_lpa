/* Challenge 80

Write a function to count the number of characters in a string (length) without using the strlen
- function should take a character array as a parameters, no need for pointers
- should return an in (the length)

write a function to concatenate two character strings, without using the strcat function
- function should take in 3 parameters: charresult[], const char str1[], const char str2[]
can return void

write a function that determines if two strings are equal
- take two constant character arrays as parameters and return a boolean of true or false if they are equal
*/

#include <stdio.h>
int main(){
    //FUNCTION PROTOTYPES
    int countstr(char userchararray[]);
    void concat(char result[], const char str1[], const char str2[]);
    int strisequal(const char str1[],const char str2[]);
    
    // declare variables
    char usercatstring[40] = {0};
    char userstr1[20]= {0};
    char userstr2[20]= {0};
    char userstr3[20]= {0};
    char userstr4[20]= {0};
    char userstr5[20]= {0};
    int userstrlen = 0;
    //what happens if you don't initialise to zero?
    
    printf("Input string to get string length\n");
    scanf("%s",userstr1);
    //note that &operator is not required since you're providing the array address
    userstrlen = countstr(userstr1);
    printf("Your string is %d characters long\n",userstrlen);

    printf("Input first string to concatenate\n");
    scanf("%s",userstr2);
    //what happens if you read two strings separated by space in one line?
    printf("Input second string to concatenate\n");
    scanf("%s",userstr3);
    concat(usercatstring, userstr2, userstr3);
    printf("Combined: %s\n", usercatstring);
    
    printf("Input first string to compare\n");
    scanf("%s",userstr4);
    //what happens if you read two strings separated by space in one line?
    printf("Input second string to compare\n");
    scanf("%s",userstr5);
    if(strisequal(userstr4,userstr5)){
        printf("Strings are equal\n");
    }
    else{
        printf("Strings are not equal\n");
    }
    
    return 0;
}

// FUNCTIONS
int countstr(char userarray[]){
    // should try to use const char
    int length = 0;
    while(userarray[length] != '\0'){
        length++;
    }
    return length;
}

void concat(char result[], const char str1[], const char str2[]){
    int i = 0;
    while(str1[i] != '\0'){
        result[i]= str1[i];
        i++;
    }
    //simpler to use for loop    
    // i is now the length of str1 and str2 will add to end of str1
    int j=0; //i of results and j of str2 are running on differene indices
    while(str2[j] != '\0'){
        result[i] = str2[j];
        i++;
        j++;
        //use result [i+j]
    }
    result[i+1] = '\0';
}

int strisequal(const char str1[],const char str2[]){
    int isequal = 1, i=0;
    while(str1[i] != '\0'){
        if(str1[i] != str2[i]){
            isequal = 0;
            break;
        }
        i++;   
    }
    return isequal;
}//what if length of string 1 is less than string 2?


/*
Notes:
- loop code blocks don't need to end in semicolons
- printf("%s\n", arr1); takes in the address of the array and prints until the null terminator
- when you declare an array you do need to declare the array size and intialize contents (or they will take whatever values are in the existing memory)

Ways to declare a string:
1. char str[] = "GeeksforGeeks";
2. char str[50] = "GeeksforGeeks";
3. char str[] = {'G','e','e','k','s','f','o','r','G','e','e','k','s','\0'};
4. char str[14] = {'G','e','e','k','s','f','o','r','G','e','e','k','s','\0'};

limit of string scanf:
https://www.tutorialspoint.com/c_standard_library/c_function_scanf.htm
*/