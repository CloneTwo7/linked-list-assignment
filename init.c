/*******************************************************************************\
|This is a function that initializes a new sentinel node for a new Linked List.	|
|After calling the function it will return the address to the sentinel node that|
|was just created. It will also set the data value of the sent to 0.		|
\*******************************************************************************/

#include <stdio.h>
#include "nodes.h"

struct node* init() {
	//allocates memory for new sentinel node
	struct node* LL = malloc(sizeof(struct node));

	//sets values of sentinel node
	LL -> data = 0;
	LL -> next = NULL; 

	//returns pointer of sentinel node
	return(LL);
}
