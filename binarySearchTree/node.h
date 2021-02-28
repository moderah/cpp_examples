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
// Node.h
#ifndef NODE_H
#define NODE_H
class Node
{
	friend class BinarySearchTree;
public:
	Node();
	Node(int val);
	~Node();
	int getValue();
	Node* getLeftNode();
	Node* getRightNode();
private:
	Node* left;
	int value;
	Node* right;
};
#endif

