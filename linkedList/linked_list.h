#pragma once

#include "node.h"
class linked_list {
public:


	node *head;

	linked_list() {
		head = NULL;
	}



	//function to add node at the front
	void addAtFront(node *n) {
		n->next = head;
		head = n;
		
	};

	//function to check if the list is empty
	bool isEmpty() {
		if (head == NULL) {
			return 1;
		}else {
			return 0;
		}

	};

	//function to add node at the end
	void addAtEnd(node *n) {
		if (head == NULL) {
			head = n;
			n->next = n;
		}else {
			node *n2 = getLastNode();
			n2->next = n;
		}	
	};


	node* getLastNode() {
		node* ptr = head;
		while (ptr->next != NULL) {
			ptr = ptr->next;
		}
	};
	

	//function to search for a data object
	node* search(data* data){
		node *ptr = head;
		while(ptr != NULL && ptr->data != data){//create operator for data comparisons
			ptr = ptr->next;
		}
		return ptr;
	};

	//function to delete any node
	node* deleteNode(data* data) {
		node *n = search(data);
		node *ptr = head;
		if (ptr == n) {
			head = n->next;
			return n;
		}
		else {
			while (ptr->next != n) {
				ptr = ptr->next;
			}
			ptr->next = n->next;
			return n;
		}
	};

	
	void printList() {
		node *ptr = head;
		while (ptr != NULL) {
			std::cout << ptr->data << "->";
			ptr = ptr->next;
		}

	};

protected:





private:




};