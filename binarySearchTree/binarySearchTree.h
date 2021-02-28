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






#pragma once
// BinarySearchTree.h
#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H
#include "node.h"
#include <cstdlib>

class BinarySearchTree
{
public:
	BinarySearchTree();
	~BinarySearchTree();
	void insert(Node* node);
	Node* insertRecursively(Node* root, Node* Newnode);
	Node* getRoot();
	void updateRoot(Node* node);
	void inOrderTraversal(Node* root);
	void dumpBinarySearchTree();
	int sum(Node* node);
	bool sameBinarySearchTree(Node* root1, Node* root2);
private:
	Node* root;
};
#endif
