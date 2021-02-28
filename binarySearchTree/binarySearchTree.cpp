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


#include "binarySearchTree.h"

// BinarySearchTree.cpp
#include <iostream>
using namespace std;
#include "Node.h"
#include "BinarySearchTree.h"
BinarySearchTree::BinarySearchTree()
{
	root = NULL;
}
BinarySearchTree::~BinarySearchTree()
{
}
Node* BinarySearchTree::getRoot()
{
	return(root);
}
void BinarySearchTree::updateRoot(Node* node)
{
	root = node;
}
void BinarySearchTree::insert(Node* node)
{
	if (root == NULL)
		root = node; else
	{
		Node* tempNode = root;
		while (tempNode != NULL)
		{
			if (node->value < tempNode->value) // go left
			{
				if (tempNode->left != NULL)
					tempNode = tempNode->left;
				else
				{
					tempNode->left = node;
					break;
				}
			}
			else // go right
			{
				if (tempNode->right != NULL)
					tempNode = tempNode->right;
				else
				{
					tempNode->right = node;
					break;
				}
			}
		} // while
	} //if
}


Node * BinarySearchTree::insertRecursively(Node * troot, Node * newNode)
{
	if (troot == NULL) {

		return newNode;
	}

	if (troot->value < newNode->value)
		newNode->left = insertRecursively(troot->left, newNode);
	else if (troot->value > newNode->value)
		newNode->right = insertRecursively(troot->right, newNode);

	return troot;
}
void BinarySearchTree::dumpBinarySearchTree()
{
	inOrderTraversal(root);
}
void BinarySearchTree::inOrderTraversal(Node* root) // Left Root Right
{
	if(root != NULL)
	{
		if (root->left != NULL) {
			inOrderTraversal(root->left);
		}
		cout << root->value << " ";
		if (root->right != NULL) {
			inOrderTraversal(root->right);
		}
	}
	else {
		cout << "bst is empty!\n\n";
	}
}
int BinarySearchTree::sum(Node* node)
{
	if (node == NULL) {
		return 0;
	}
	
	return(node->value + sum(node->left) + sum(node->right));
}
bool BinarySearchTree::sameBinarySearchTree(Node* root1, Node* root2)
{
	/*1. both empty */
	if (root1 == NULL && root2 == NULL)
		return 1;

	/* 2. both non-empty -> compare them */
	if (root1 != NULL && root2 != NULL)
	{
		return(
				root1->getValue() == root2->getValue() &&
				sameBinarySearchTree(root1->getLeftNode(), root2->getLeftNode()) &&
				sameBinarySearchTree(root1->getRightNode(), root2->getRightNode())
				);
	}

	/* 3. one empty, one not -> false */
	return 0;
}