



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
