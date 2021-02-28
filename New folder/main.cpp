
#include "headers/base.h"
#include "headers/derived.h"
#include "headers/derived2.h"
#include "headers/derived3.h"

#include <iostream>
#include <fstream>





int main() {
	using namespace BASE;
	using namespace DERIVED;
	using namespace DERIVED2;
	using namespace DERIVED3;
	std::cout << "primary tests: \n\n";

	derived der;
	base& d1= der;
	{
		std::cout << "~print_on/shift operators~\n\n";
		std::cout << "normal derived class object: \n\n";
		d1.print_on(std::cout);
		std::cout<<"overloaded << operator derived class object: \n\n"<< der;
		std::cout<<std::endl;
		
	}

	{
		std::cout << "derived 1 test: \n\n";
		std::cout << "derived 1: " << d1<<"\n\n";
		std::ofstream file("output.txt");
		file << "derived 1: "<< d1<<"\n\n";

		/* 
			it is not possible to create a variable of type base, because you 
			will not be able to access it any way.

		*/
		std::cout << "derived 2 test: \n\n";
		derived2 der2;
		base& d2 = der2;
		std::cout << "derived 2: " << d2<<"\n\n";
		file << "derived 2: " << d2 << "\n\n";

		file.close();
	}

	{
		//these two do not have polymorphic behavior.
		base *const b4 = new derived;
		base *const b5 = new derived2;
		//base *const b6 = new derived3;


		std::ofstream file("output2.txt");

		b5->print_on(std::cout);
		b5->print_on(file);
		//base *const b6 = new derived3(4);
	
	}


	system("pause");
	return 0;
}	