#pragma once
#include <string>

class Stebel{
	int size;
public:
	Stebel::Stebel(void);
	void setSize(int size);
	int getSize();
	virtual void print();
	Stebel::~Stebel(void);
};