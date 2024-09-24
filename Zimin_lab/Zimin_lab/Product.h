#pragma once
#include <iostream>
#include <string>
#include <fstream>

class Zimin_Product
{
private:
	std::string name;
	std::string manufacturer;
	float price;
	unsigned int id;
	static unsigned int MaxId;

public:
	Zimin_Product();
	~Zimin_Product();

	friend std::istream& operator >> (std::istream&, Zimin_Product&);

	friend std::ostream& operator << (std::ostream&, Zimin_Product&);

	friend std::ifstream& operator >> (std::ifstream&, Zimin_Product&);

	friend std::ofstream& operator << (std::ofstream&, Zimin_Product&);
};


