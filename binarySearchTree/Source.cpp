// University of Arkansas at Little Rock
// Department of Computer Science
// CPSC 2380: Data Structures and Algorithms
// Fall 2019
// Project 2: Binary Search Tree
// Due Date: November 26, 2019
// Name:Brandon Autry		
// T-number (Last 4 Digits): 5439
// Description of the Program (2-3 sentences): 
//	How I use a binary search tree to display and manipulate
//	integer values. this can be translated from many different
//	types of values.
// Date Written: 11-14-2019
// Date Revised: 11-26-2019





#include <iostream>
using namespace std;
#include "Node.h"
#include "BinarySearchTree.h"
int main()
{

	cout << "test 1: \n\n";

	BinarySearchTree* bst = new BinarySearchTree();
	Node* node1 = new Node(8);
	bst->insert(node1);
	Node* node2 = new Node(5);
	bst->insert(node2);
	Node* node3 = new Node(6);
	bst->insert(node3);
	Node* node4 = new Node(10);
	bst->insert(node4);
	Node* node5 = new Node(12);
	bst->insert(node5);


	// dump binary search tree
	bst->dumpBinarySearchTree();
	cout << endl;
	cout << bst->sum(bst->getRoot()) << endl;
	cout << "\n\n";

	cout << "test 2: \n\n";
	BinarySearchTree* bst2 = new BinarySearchTree();
	Node* node6 = new Node(8);
	bst2->updateRoot(bst2->insertRecursively(bst2->getRoot(), node6));
	Node* node7 = new Node(5);
	bst2->insertRecursively(bst2->getRoot(), node7);
	Node* node8 = new Node(6);
	bst2->insertRecursively(bst2->getRoot(), node8);
	Node* node9 = new Node(10);
	bst2->insertRecursively(bst2->getRoot(), node9);

	Node* node10 = new Node(12);
	bst2->insertRecursively(bst2->getRoot(), node10);
	// dump binary search tree
	bst2->dumpBinarySearchTree();
	cout << "\n\n";

	cout << "test 3: \n\n";
	BinarySearchTree* bst3 = new BinarySearchTree();


	Node* node11 = new Node(8);
	bst3->insert(node11);
	Node* node12 = new Node(5);
	bst3->insert(node12);
	Node* node13 = new Node(6);
	bst3->insert(node13);
	Node* node14 = new Node(10);
	bst3->insert(node14);
	Node* node15 = new Node(12);
	bst3->insert(node15);

	// dump binary search tree
	bst3->dumpBinarySearchTree();
	cout << "\n\n";

	BinarySearchTree* bst4 = new BinarySearchTree();
	Node* node16 = new Node(8);
	bst4->updateRoot(bst4->insertRecursively(bst4->getRoot(), node16));
	Node* node17 = new Node(5);
	bst4->insertRecursively(bst4->getRoot(), node17);
	Node* node18 = new Node(6);
	bst4->insertRecursively(bst4->getRoot(), node18);
	Node* node19 = new Node(10);
	bst4->insertRecursively(bst4->getRoot(), node19);

	Node* node20 = new Node(12);
	bst4->insertRecursively(bst4->getRoot(), node20);
	// dump binary search tree
	bst4->dumpBinarySearchTree();
	cout << "\n\n";
	cout << bst4->sameBinarySearchTree(bst3->getRoot(), bst4->getRoot()) << endl;
	cout << "\n\n";

	system("PAUSE");
	return 0;
}