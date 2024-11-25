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
    void serialize(Archive& ar, const unsigned int version);

    QStringList getParameters() const override;

public:
    void setCategory(const QString category);
    void setBattery(bool battery);
    void setWeight(const float weight);

    Electronics() {}
    // Electronics(const Electronics& other);
    virtual ~Electronics() {}

    // std::shared_ptr<Zimin_Product> clone() const override;
};

#endif
