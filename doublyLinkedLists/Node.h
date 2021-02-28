

#pragma once
#include "PCH.h"


namespace NODE {
	class Node{

	public:

		Node();
		Node(int val);


	private:

		int value;
		int* next;
	};
};

