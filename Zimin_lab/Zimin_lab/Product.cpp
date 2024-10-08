#include "Product.h"
#include "Utils.h"

using namespace std;

BOOST_CLASS_VERSION(Zimin_Product, 1)
BOOST_CLASS_EXPORT(Zimin_Product)

unsigned int Zimin_Product::MaxId = 1;
static int MAX_PRICE = 10000000;


Zimin_Product::Zimin_Product() {
	id = MaxId++;
	cout << "Создал продукт :)" << endl;
}

void Zimin_Product::writeInfo() {
	cout << "Введите название продукта: " << endl;
	name = input_string();

	cout << "Введите производителя продукта: " << endl;
	manufacturer = input_string();

	cout << "Введите цену продукта: " << endl;
	price = GetCorrectNumber(0, MAX_PRICE);
}

void Zimin_Product::printInfo() {
	cout << "\nТовар ID " << id << endl;
	cout << "Название: " << name << endl 
		<< "Производитель: " << manufacturer << endl 
		<<"Цена: " << price << endl;
}

template<class Archive>
void Zimin_Product::save(Archive& ar, const unsigned int version) const {
	ar << name;
	ar << manufacturer;
	ar << price;
	ar << id;
}

template<class Archive>
void Zimin_Product::load(Archive& ar, const unsigned int version) {
	ar >> name;
	ar >> manufacturer;
	ar >> price;
	ar >> id;
}

Zimin_Product::~Zimin_Product() {
	cout << "Удалил продукт :)" << endl;
}
