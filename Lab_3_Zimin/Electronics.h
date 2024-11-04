#ifndef ELECTRONICS_H
#define ELECTRONICS_H

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
	void save(Archive& ar, const unsigned int version) const;

	template<class Archive>
	void load(Archive& ar, const unsigned int version);

    QStringList getParameters() override;

public:
    BOOST_SERIALIZATION_SPLIT_MEMBER()
    Electronics() {};
    ~Electronics() {};
};

#endif
