/*******************************************************\
|This when this function is passed a LL and an index,	|
|it will set the valid flag of that index in the LL	|
|to 0.							|
\*******************************************************/

#include <stdio.h>
#include "nodes.h"

void release_node(NODE *LL, int index) {
	LL[index].valid = 0;
}
