/* CHALLENGE117
Create a structure pointer and pass it to a function
Create a structure named item with the following members:
- itemName - char pointer
- quantity - int
- price - float
- amount - float (store quantity *price)

create a function name readItem that takes a strucure pointer of type item as a parameter - read in from the user product name, price and quantitiy.
contents read it should be stored in the passed in structure to the function

create a function name print item that takes a parameter a structure point of type item - prints the contents of the parameter

main function should declare an item and a pointer to the item
*/

#include <stdio.h>

struct item {
	char *itemName; //assume max 30 characters
	int quantity;
	float price;
	float amount;

};

void readItem (struct *item userItem);
void printItem(struct *item userItem);

int main(){

// initialise pointer for calling readItem function
struct item userItem1;
struct item *pUserItem1;
pUserItem1 = &userItem1;
//create pointer of struct?
//memory has been allocated for the elements of the structure (i.e. pointer of char), but memory has not been allocated for the char


pUserItem1->itemName = (char *) malloc(30 * sizeof(*char))
//(*pUserItem1).itemName

//check malloc for NULL
if(pUserItem1 = NULL){
	exit(-1) //return(-1);
}

//call read item
readItem(pUserItem1);

//call print item
printItem(pUserItem1);


//free malloc( don't free the entire structure, just what malloc allocated for)
free(pUserItem1->itemName)

	return 0;
}

void readItem (struct item *userItem){
	//passing in the pointer allows the item to be modified outside the function
	printf("Input Item Name");
	scanf("%s", userItem->itemName);
	printf("Input Item Price");
	scanf("%f",userItem->price);
	printf("Input Item Quantity", );
	scanf("%d",userItem->quantity);
	userItem->amount = (float)((userItem->price)*(userItem->quantity));

}

void printItem(struct item *userItem){
	printf("Name:%s,Price:%f,Quantity:%d, Amount:%f",userItem->itemName,userItem->price,userItem->quantity,userItem->amount)

}

