#pragma once

#include "data.h"


class node {
public:

	data data; 
	node *next; //pointer to next node in sequence
	node (int x) {
		data->x= x;
		next = NULL;
	};
protected:




private:




};