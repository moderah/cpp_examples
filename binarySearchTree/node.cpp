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





#include "node.h"

// Node.cpp
#ifndef NODE_CPP
#define NODE_CPP
#include <iostream>
using namespace std;
#include "Node.h"
Node::Node(){

	left = NULL;
	value = 0;
	right = NULL;
}
Node::Node(int val)
{
	left = NULL;
	right = NULL;
	value = val;
}
Node::~Node()
{
}
int Node::getValue()
{
	return value;
}
Node* Node::getLeftNode()
{
	return (left);
}
Node* Node::getRightNode()
{
	return (right);
}
#endif