#pragma once
#include "stdafx.h"
#include "Stebel.h"
#include <string>

class Tsvetok:public Stebel{
	std::string name;
	std::string color;
public:
	Tsvetok::Tsvetok(void);
	void setName(std::string name);
	std::string getName();
	void setColor(std::string color);
	std::string getColor();
	virtual void print();
	Tsvetok::~Tsvetok(void);
};