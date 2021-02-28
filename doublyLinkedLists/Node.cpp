#include "Node.h"

namespace NODE {

	Node::Node() {
		Node* node = new Node();
	};

	Node::Node(int val) : value(val), next(NULL) {
		Node* node = new Node(val);
	};


};