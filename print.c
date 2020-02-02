#include <stdio.h>
#include "nodes.h"

void print(struct node* LL) {
	struct node* current = LL -> next;
	
	int printing = true;
	while(printing == true) {
		if(current -> next == NULL) {
			printing = false;
		}
		printf("%i	", current -> data);
		current = current -> next;
	}
	printf("\n");
}
