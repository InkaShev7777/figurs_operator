#pragma once
#include<iostream>
#include"Kvadrat.h"
class Krug
{
	int rad;
	bool ok;
public:
	Krug()
	{
		this->rad = 20;
		this->ok = true;
	}
	int getRad()
	{
		return this->rad;
	}
	void print() {
		std::cout << "Krug";
	}
	int proverka(Kvadrat& kvadrat)
	{
		if (this->rad > kvadrat.getStorona())
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}

	Moneta operator+(Kvadrat& kvadrat)
	{
		if (this->rad > kvadrat.getStorona())
			return Moneta();
	}

	washing_machine operator+(Kvadrat* kvadrat)
	{
		return washing_machine();
	}
	friend std::ostream& operator<<(std::ostream& out, const Krug& kr)
	{
		out << "Radius: " << kr.rad << "\tBool:" << kr.ok << "\n";
		return out;
	}
	friend std::istream& operator>>(std::istream& in, Krug& kr)
	{
		in >> kr.rad;
		in >> kr.ok;
		return in;
	}


	

};

