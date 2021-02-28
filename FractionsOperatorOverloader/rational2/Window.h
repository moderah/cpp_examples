#ifndef WINDOW_H
#define WINDOW_H


#pragma once
#include "GLFW/glfw3.h"
#include "pch.h"






	class Window{
	public:
		Window();
		Window(int dimX, int dimY, const Window* win);
		Window(int dimx, int dimY);
		~Window();
	
	
	private:

		Window* window;




	protected:




	};


#endif // !WINDOW_H