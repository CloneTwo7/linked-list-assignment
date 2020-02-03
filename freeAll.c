/***************************************************************\
|This function is passed a sentinel node of a Linked List and 	|
|follows the next values clearing each individual node one at a |
|time.								|
\***************************************************************/

#include <stdio.h>
#include "nodes.h"

void freeAll(struct node *LL) {
	//declares the node that the loop is clearing
	struct node* current = LL;

	//creates flag that stops an endless loop
	int clearing = true;
	while(clearing == true) {
		//checks for end condition
		if(current -> next == NULL) {
			clearing = false;
		}
		//stores the location of the next node to be freed
		struct node* next = current -> next;
		//frees current node
		free(current);
		//sets new current to the next
		current = next;
	}

}
