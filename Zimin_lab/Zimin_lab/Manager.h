#pragma once
#include "Product.h"
#include "Electronics.h"

#include <boost/serialization/vector.hpp>

class Zimin_Manager
{
private:
	std::vector<std::shared_ptr<Zimin_Product>> products;
public:
	Zimin_Manager();
	~Zimin_Manager();

	void createZimin_Product();
	void createElectronics();
	void showZimin_Products();
	void clearZimin_Products();
	void saveZimin_Products();
	void loadZimin_Products();
};