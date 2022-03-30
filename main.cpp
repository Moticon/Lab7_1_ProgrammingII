#include "Header.h"
/* 
 *  This won't compile until you add methods for the Linked List class... 
 *  Add "append" and "PrintList and also the default constructor. 
 */
int main() {
	LinkedList list; 

	list.append(new Node(5)); 
	list.printList(); 

	list.append(new Node(8)); 
	list.printList(); 

	list.append(new Node(55)); 
	list.printList(); 


	return 0; 
}