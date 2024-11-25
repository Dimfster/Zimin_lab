#pragma once
#include "Product.h"
#include "Electronics.h"
#include "pch.h"

class Zimin_Manager
{
    friend class boost::serialization::access;
private:
    std::vector<std::shared_ptr<Zimin_Product>> products;

    template<class Archive>
    void serialize(Archive& ar, const unsigned int version);


public:
    Zimin_Manager();

    // // Конструктор копирования
    // Zimin_Manager(const Zimin_Manager& other);

    // Zimin_Manager& operator=(const Zimin_Manager& other);

    ~Zimin_Manager();

    bool isEmpty() const;
    void draw(QPainter *painter, QVector<int>& columnWidths, QStringList headers);
    std::vector<std::shared_ptr<Zimin_Product>> getProducts();
	void clearZimin_Products();
    void saveZimin_Products(std::string);
    void loadZimin_Products(std::string);

    void createProduct();
    void createElectronic();
    void deleteProduct(std::shared_ptr<Zimin_Product> p);
};
