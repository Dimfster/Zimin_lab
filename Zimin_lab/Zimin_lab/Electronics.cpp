#include "Electronics.h"
#include "Utils.h"

using namespace std;

static double MAX_WEIGHT = 100;

BOOST_CLASS_VERSION(Electronics, 2)
BOOST_CLASS_EXPORT(Electronics)

Electronics::Electronics() {
	device_type = "";
	cout << "Создал Электронику :)" << endl;
}
Electronics::~Electronics() {
	cout << "Удалил Электронику :)" << endl;
}

void Electronics::writeInfo() {
	cout << "Введите категорию электроники: " << endl;
	device_type = input_string();
	Zimin_Product::writeInfo();

	cout << "Есть ли батарея у устройства?(1 - да, 0 - нет): " << endl;
	if (GetCorrectNumber(0, 1)) { has_battery = true; }
	else { has_battery = false; }
	cout << "Введите вес: " << endl;
	weight = GetCorrectNumber(1.0, MAX_WEIGHT);
}

void Electronics::printInfo() {
	Zimin_Product::printInfo();
	string status = has_battery ? " есть" : " нет";
	cout << "Категория: " << device_type << endl;
	cout << "Наличие батареи: " << status << endl;
	cout << "Вес: " << weight << endl;
}

template<class Archive>
void Electronics::save(Archive& ar, const unsigned int version) const {
	ar& boost::serialization::base_object<Zimin_Product>(*this);
	ar << device_type;
	ar << has_battery;
	ar << weight;
}

template<class Archive>
void Electronics::load(Archive& ar, const unsigned int version) {
	ar& boost::serialization::base_object<Zimin_Product>(*this);
	ar >> device_type;
	ar >> has_battery;
	ar >> weight;
}