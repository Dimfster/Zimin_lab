#pragma once
#include "Product.h"
#include "pch.h"

class Zimin_Manager
{
private:
	std::vector<std::shared_ptr<Zimin_Product>> products;
public:
    Zimin_Manager();
    ~Zimin_Manager();

    bool isEmpty() const;
    void draw(QPainter *painter, int x, int &y, QVector<int>& column_widths, int height);
    std::vector<std::shared_ptr<Zimin_Product>> getProducts();
	void clearZimin_Products();
    void saveZimin_Products(std::string);
    void loadZimin_Products(std::string);

};
