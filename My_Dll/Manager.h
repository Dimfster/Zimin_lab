#pragma once
#include "Product.h"
#include "Electronics.h"

#include "pch.h"

class Zimin_Manager
{
public:
	std::vector<std::shared_ptr<Zimin_Product>> products;
	Zimin_Manager() {};
	~Zimin_Manager() {};
};