#pragma once
#include<iostream>
#include "Liniya.h"
#include"Pryamougolnyk.h"
#include "Moneta.h"
#include "washing_machine.h"
class Kvadrat
{
	int storona;
public:
	Kvadrat()
	{
		this->storona = 10;
	}
	int getStorona()
	{
		return this->storona;
	}
	void print() {
		std::cout << "Kvadrat";
	}
	Pryamougolnyk operator+(Liniya& liniya)
	{
		return Pryamougolnyk();
	}
	Pryamougolnyk operator-(Liniya& liniya)
	{
		return Pryamougolnyk();
	}
	friend std::ostream& operator<<(std::ostream& out,const Kvadrat& kv)
	{
		out << "Storona: " << kv.storona << "\n";
		return out;
	}
	friend std::istream& operator>>(std::istream& in, Kvadrat& kv)
	{
		in >> kv.storona;
		return in;
	}

};

