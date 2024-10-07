#include "Electronics.h"
#include "Utils.h"

using namespace std;

static double MAX_WEIGHT = 100;

BOOST_CLASS_VERSION(Electronics, 2)
BOOST_CLASS_EXPORT(Electronics)

Electronics::Electronics() {
	device_type = "";
	cout << "������ ����������� :)" << endl;
}
Electronics::~Electronics() {
	cout << "������ ����������� :)" << endl;
}

void Electronics::writeInfo() {
	cout << "������� ��������� �����������: " << endl;
	device_type = input_string();
	Zimin_Product::writeInfo();

	cout << "���� �� ������� � ����������?(1 - ��, 0 - ���): " << endl;
	if (GetCorrectNumber(0, 1)) { has_battery = true; }
	else { has_battery = false; }
	cout << "������� ���: " << endl;
	weight = GetCorrectNumber(1.0, MAX_WEIGHT);
}

void Electronics::printInfo() {
	Zimin_Product::printInfo();
	string status = has_battery ? " ����" : " ���";
	cout << "���������: " << device_type << endl;
	cout << "������� �������: " << status << endl;
	cout << "���: " << weight << endl;
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