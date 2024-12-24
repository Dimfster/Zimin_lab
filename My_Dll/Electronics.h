
#pragma once
#include "Product.h"
#include "pch.h"

class Electronics :
	public Zimin_Product
{
private:
	friend class boost::serialization::access;

protected:
	std::string device_type = "";
	bool has_battery = false;
	double weight = 0;

	template<class Archive>
	void save(Archive& ar, const unsigned int version) const {
		ar& boost::serialization::base_object<Zimin_Product>(*this);
		ar << device_type;
		ar << has_battery;
		ar << weight;
	}

	template<class Archive>
	void load(Archive& ar, const unsigned int version) {
		ar& boost::serialization::base_object<Zimin_Product>(*this);
		ar >> device_type;
		ar >> has_battery;
		ar >> weight;
	}

public:
	BOOST_SERIALIZATION_SPLIT_MEMBER()
	Electronics() {};
	~Electronics() {};

	ZiminProductOrElectronicsStruct getStruct() const override
	{
		ZiminProductOrElectronicsStruct result = Zimin_Product::getStruct();
		result.is_electronics = true;
		strcpy(result.device_type, device_type.c_str());
		result.has_battery = has_battery;
		result.weight = weight;
		return result;
	};

	Electronics(const ZiminProductOrElectronicsStruct& data) : Zimin_Product(data)
	{
		device_type = data.device_type;
		has_battery = data.has_battery;
		weight = data.weight;
	};
};