#pragma once
#include <string>

class Upakovka{
	std::string material;
public:
	Upakovka::Upakovka(void);
	void setMaterial(std::string material);
	void getMaterial();
	Upakovka::~Upakovka(void);
};