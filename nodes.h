//Define statements 
#define true 1
#define false 0

//Other Libraries
#include <stdlib.h>

//Struct node declaration 
struct node {
	int data;
	struct node *next;
};

//Prototypes
struct node *init();
int add(struct node*, int);
void print(struct node*);
int delete(struct node*, int);
int search(struct node*, int);
void freeAll(struct node*);
