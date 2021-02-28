





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
