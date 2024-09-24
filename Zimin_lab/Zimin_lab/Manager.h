#pragma once
#include <vector>
#include "Product.h"

class Zimin_Manager
{
private:
	std::vector<Zimin_Product*> products;
public:
	Zimin_Manager();
	~Zimin_Manager();

	void createZimin_Product();
	void showZimin_Products();
	void clearZimin_Products();
	void saveZimin_Products();
	void loadZimin_Products();
};