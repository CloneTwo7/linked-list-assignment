#include <stdio.h>
#include "nodes.h"

struct node* init() {
	struct node* LL = malloc(sizeof(struct node));

	LL -> data = 0;
	LL -> next = NULL; 

	return(LL);
}
