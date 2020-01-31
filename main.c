/***********************************************************************************************\
|The following program was made by Travis Peterson for CSE 222 by Nick Macias			|
|-----------------------------------------------------------------------------------------------|
|This is the main function that parses user input and calls other functions based off of what   |
|the user wishes to do. There is a friendly greeting by the program itself, and then it follows |
|the basic loop of interacting witht the Linked List.						|
|The following commands are programmed here:							|
|-----------------------------------------------------------------------------------------------|
|p - prints the current Linked List in sorted order						|
|i - inserts a new number into the Linked List							|
|d - deletes an existing number from the Linked List						|
|s - searches the Linked List to see if the number is passed to it				|
|-----------------------------------------------------------------------------------------------|
|Any other inputs will result in a kindly reminder of the commands and a passive-aggressive	|
|question asking whether or not the user wishes to try again.					|
\***********************************************************************************************/

#include <stdio.h>
#include "nodes.h"

int main() {
	//Initializes the Linked List
	NODE test;
	init(test);
	
	//Kind greeting to the user
	printf("Good evening sir or madam.\n");
	printf("How are we manipulating data today?\n");

	//variables for parsing commands
	char input[120];
	char command;
	int data;

	//following code runs while the user is enter and storing data
	while(command !=  'x') {
		
		//code for parsing commands and data
		fgets(input, 120, stdin);
		sscanf(input, "%c %i", &command, &data);

		//if user wants to insert, run this cod
		if(command == 'i') {
			//flag to tell which error occurs
			int flag = 0;
			//searches List first to see if node exists
			int i = search(test, data);
			if(i == 1) {
				printf("NODE ALREADY IN LIST\n");
				//sets flag if node is already in list
				flag = 1;
			}

			//repurposes i variable to see if it is added correctly
			i = add(test, data);
			if(i == 1) {
				//if added correctly, prints SUCCESS
				printf("SUCCESS\n");
			} 
			else if(flag != 1) {
				//if flag is not set, and it was not added correctly then it is because LL is out of space
				printf("OUT OF SPACE\n");
			}
		}

		//if user wants to print LL, run this code
		else if(command == 'p') {
			print(test);
		}

		//if user wants to search for a number, calls search,
		else if(command == 's') {
			int i = search(test, data);
			//if search returns 1, then its in the LL
			if(i == 1) {
				printf("FOUND\n");
			}
			//else, it is not in the Linked List
			else {
				printf("NOT FOUND\n");
			}
		}
		
		//If the user wants to delete a number, then runs following code
		else if(command == 'd') {
			//first, searches to see if it's in the LL
			int i = search(test, data);
			//if it is in LL, then it calls delete 
			if(i == 1) {
				delete(test, data);
				printf("SUCCESS\n");
			}
			else {
				//else it is not in the linked list
				printf("NODE NOT FOUND\n");
			}
		}
		
		else {
			//anything that is not an above command results in an explanation of the commands
			printf("It seems as though you are lost.\n");
			printf("Here are some helpful suggestions:\n");
			printf("i - followed by a number will insert the number into your list\n");
			printf("p - will simply print your list in order\n");
			printf("s - followed by a number will tell you whether or not the number is already in your list.\n");
			printf("d - followed by a number will delete that number from your list\n\n");
			printf("Now, would you care to try again?\n");

		}
		
	}
}
