#pragma once
#include "pch.h"

struct ZiminProductStruct
{
	char name [100];
	char manufacturer [100];
	float price;
	unsigned int id;
};

struct ZiminProductOrElectronicsStruct
{
	bool is_electronics = false;
	ZiminProductStruct product_data;
	char device_type[100] = {};
	bool has_battery = false;
	double weight = 0;
};

class Zimin_Product
{
private:
	friend class boost::serialization::access;

protected:
	std::string name = "";
	std::string manufacturer = "";
	float price = 0;
	unsigned int id;

	template<class Archive>
	void save(Archive& ar, const unsigned int version) const {
		ar << name;
		ar << manufacturer;
		ar << price;
		ar << id;
	}

	template<class Archive>
	void load(Archive& ar, const unsigned int version) {
		ar >> name;
		ar >> manufacturer;
		ar >> price;
		ar >> id;
	}

public:
	BOOST_SERIALIZATION_SPLIT_MEMBER()
	Zimin_Product() {}
	virtual ~Zimin_Product() {}

	virtual ZiminProductOrElectronicsStruct getStruct() const
	{
		ZiminProductStruct productStruct;
		productStruct.id = id;
		strcpy(productStruct.name,name.c_str());
		strcpy(productStruct.manufacturer, manufacturer.c_str());
		productStruct.price = price;

		ZiminProductOrElectronicsStruct result;
		result.product_data = productStruct;
		return result;
	};

	Zimin_Product(const ZiminProductOrElectronicsStruct& data)
	{
		id = data.product_data.id;
		name = data.product_data.name;
		manufacturer = data.product_data.manufacturer;
		price = data.product_data.price;
	};
};
