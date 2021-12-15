#pragma once
#include<iostream>
#include"Kvadrat.h"
//#define f

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
#ifdef f
	Moneta operator+(Kvadrat& kvadrat)
	{
		if (this->rad > kvadrat.getStorona())
			return Moneta();
	}
#else
	washing_machine operator+(Kvadrat& kvadrat)
	{
		return washing_machine();
	}
#endif 

	

};

