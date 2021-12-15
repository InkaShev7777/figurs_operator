#include <iostream>
#include "Krug.h"
//#define a
int main()
{
	//1,2
	Kvadrat kvadrat;
	Liniya liniya;
	Pryamougolnyk pry = kvadrat + liniya;
	pry.print();
	std::cout << "\n";
	//3
	Krug krug;
	Krug k;
	
#ifdef a
	Moneta m = krug + kvadrat;
	m.print();
#else
	washing_machine m = k + kvadrat;
	m.print();
#endif 
}

