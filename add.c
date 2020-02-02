/***********************************************************************************************\
|This add function is passed the first location of a Linked List (The sentinel node) and a	|
|number that is to be added. This function utilizes the search function from nodes.h to verify	|
|that the number isn't already in the list. Then it will go through each section of the LL to 	|
|figure out where exactly it should place the new number.					|
|-----------------------------------------------------------------------------------------------|
|This function returns 1 if the addition was successful, and it returns 0 if the addition was	|
|unsuccessful.											|
\***********************************************************************************************/

#include <stdio.h>
#include "nodes.h"

int add(struct node* LL, int num) {

	//creates variable "exists" to test whether or not the node alread exists
	int exists = search(LL, num);
	//if it does, then exit function with value 0
	if(exists == true) {
		return (0);
	}
	
	//if value does not exist, create a node called "new"
	struct node *new = malloc(sizeof(struct node*));

	//create struct node* for previous node and current node
	struct node *prev = LL; //sets previous to be the sentinel node
	struct node *current = LL -> next; //sets current to be the next node in the LL (possible NULL)

	//created flag variable called adding to see when it is done adding
	int adding = true;
	while(adding == true) {
		//if current == NULL then it adds the node to the end of the LL
		if(current == NULL) {
			new -> data = num;
			new -> next = NULL;
			prev -> next = new;
			
			//returns 1 if added successfully
			return 1;
		}
		//if current's data field is greater than the number being added, adds the node between previous and current
		if(current -> data > num) {
			new -> data = num;
			new -> next = current;
			prev -> next = new;
			
			//returns 1 if added successfully
			return 1;
		}
		else {
			prev = current;
			current = current -> next;
		}
	}

	

}
