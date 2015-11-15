#include "stdafx.h"
#include "Tsvetok.h"
#include <string>
#include <iostream>


	Tsvetok::Tsvetok(void){}
	void Tsvetok:: setName(std::string name){
		this->name = name;
	}
	std::string Tsvetok::getName(){
		return this->name;
	};
	void Tsvetok::setColor(std::string color){
		this->color = color;
	}
	std::string Tsvetok::getColor(){
		return this->color;
	}
	void Tsvetok::print(){
		std::cout << "\nНазвание " << getName() << std::endl;
		std::cout << "\nЦвет " << getColor() << std::endl;
		std::cout << "\nРазмер стебля " << getSize() << std::endl;
	}
	Tsvetok::~Tsvetok(void){}
