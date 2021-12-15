#pragma once
#include<iostream>
#include "Liniya.h"
#include"Pryamougolnyk.h"
class Kvadrat
{
public:
	void print() {
		std::cout << "Kvadrat";
	}
	Pryamougolnyk operator+(Liniya& liniya)
	{
		return Pryamougolnyk();
	}
};

