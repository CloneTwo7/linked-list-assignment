/*******************************************************************************\
|When this function is passed a Linked List sentinel node and an integer it will|
|attempt to delete the integer from the linked list. First it searches to verify|
|the number is in the Linked List and then it will go through the Linked List 	|
|one node at a time finding where that nunber is stored, then it adjusts the	|
|next values accordingly to free that space.					|
|-------------------------------------------------------------------------------|
|This function returns a 1 on a successful deletion, and a 0 if it was unable to|
|find the integer in the list							|
\*******************************************************************************/

#include <stdio.h>
#include "nodes.h"

int delete(struct node* LL, int num) {
	
	//searches LL to find the number being deleted
	int exists = search(LL, num);
	if(exists == false) {
		//if not found, returns 0
		return 0;
	}
	
	//creates previous and current nodes in order to search through the Linked List
	struct node* prev = LL;
	struct node* current = LL -> next;

	//created flag called deleting
	int deleting = true;
	while(deleting == true) {
		//if data value is found, adjusts next values and frees memory
		if(current -> data == num) {
			prev -> next = current -> next;
			free(current);
			deleting = false;
			
			//when deleted, return 1
			return 1;
		}
		//if not found, it adjusts previous and current counters
		else {
			prev = current;
			current = current -> next;
		}
	}
	
}
