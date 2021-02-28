#include "node.h"


node::node() {
	node* newNode = new node(0, 0, 0, 0);
};

node::node(int x, int y, int z, int w) {
	node* newNode = new node(x, y, z, w);
	node::data = newNode;
};

node::node(const int* x, const int* y, const int* z, const int* w) {
	node* newNode = new node(*x, *y, *z, *w);
	node::data = newNode;
};


node::~node() {};