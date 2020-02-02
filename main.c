#include <stdio.h>
#include "nodes.h"


void main() {

	struct node* LL = init();

	add(LL, 25);
	print(LL);

	add(LL, 30);
	print(LL);

	add(LL, 27);
	print(LL);

	add(LL, 10);
	print(LL);

	delete(LL, 27);
	print(LL);
}
