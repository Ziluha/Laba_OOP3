#include "stdafx.h"
#include "Stebel.h"
#include <string>
#include <iostream>


	Stebel::Stebel(void){}
	void Stebel:: setSize(int size){
		this->size = size;
	}
	int Stebel:: getSize(){
		return this->size;
	}
	void Stebel::print(){ std::cout << "\nРазмер стебля " << getSize() << std::endl; };
	Stebel::~Stebel(void){}
