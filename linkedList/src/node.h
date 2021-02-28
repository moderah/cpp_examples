#pragma once


class node{
public:

	node();
	node(int x, int y, int z, int w);
	node(const int* x,const int* y, const int* z, const int* w);	
	~node();

protected:

	enum component {
		x, y, z, w
	};

	struct {
		component x = x;
		component y = y;
		component z = z;
		component w = w;
	};
private:

	node* data;





};

