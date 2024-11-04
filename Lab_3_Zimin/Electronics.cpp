#include "Electronics.h"

using namespace std;

static double MAX_WEIGHT = 100;

BOOST_CLASS_VERSION(Electronics, 2)
BOOST_CLASS_EXPORT(Electronics)	

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

QStringList Electronics::getParameters()
{
    QString battery = has_battery ? "Есть" : "Нет";
    return QStringList({QString::number(id),
                        QString::fromLocal8Bit(name),
                        QString::fromLocal8Bit(manufacturer),
                        QString::number(price),
                        QString::fromLocal8Bit(device_type),
                        battery,
                        QString::number(weight)});
}

