/*******************************************************************************************************\
|Search is a function that is passed the pointer to a Linked List's sentinel node and a number. The 	|
|function will search the entirety of the Linked List and verify whether or not the passed number is a 	|
|part of the Linked List already. If the number is in the Linked List, search returns 1. If the number	|
|is not in the Linked List, it will return 0.								|
\*******************************************************************************************************/

#include <stdio.h>
#include "nodes.h"

int search(struct node* LL, int num) {

	//sets searching variable == true and sets the LL = to first non-sentinel node of the Linked List
	int searching = true;

	//runs loop while searching
	while(searching == true) {
		//checks to see if it's at the end of the list
		if(LL -> next == NULL) {
			//if at the end of the list, stop searching
			searching = false;
		}
		//checks to see if data of LL node equals number passed to search
		if(LL -> data == num) {
			//if it is equal, stop searching and return 0
			searching = false;
			return (1);
		}
		//if the number is not found and the search is sill running
		else if(searching == true) {
			//increment to next section of code
			LL = LL -> next;
		}
	}
	
	//if it stops searching and the number was not found, return 0
	return (0);
}
