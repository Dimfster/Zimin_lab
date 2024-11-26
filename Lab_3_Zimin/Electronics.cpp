#include "Electronics.h"

using namespace std;

static double MAX_WEIGHT = 100;

BOOST_CLASS_VERSION(Electronics, 2)
BOOST_CLASS_EXPORT(Electronics)


template<class Archive>
void Electronics::serialize(Archive& ar, const unsigned int version) {
    ar& boost::serialization::base_object<Zimin_Product>(*this);
    ar & device_type;
    ar & has_battery;
    ar & weight;
}


QStringList Electronics::getParameters() const
{
    return QStringList({QString::number(id),
                        QString::fromLocal8Bit(name),
                        QString::fromLocal8Bit(manufacturer),
                        QString::number(price),
                        QString::fromLocal8Bit(device_type),
                        has_battery ? "Есть" : "Нет",
                        QString::number(weight)});
}

void Electronics::setCategory(const QString category)
{
    device_type = category.toLocal8Bit();
}

void Electronics::setBattery(bool battery)
{
    has_battery = battery;
}

void Electronics::setWeight(const float weight)
{
    this->weight = weight;
}

Electronics::Electronics(QString device_type, bool has_battery, double weight)
    : Zimin_Product("Новая электроника","Неизвестен", 0)
    , device_type(device_type.toLocal8Bit())
    , has_battery(has_battery)
    , weight(weight)
{
}

// Electronics::Electronics(const Electronics &other)
// {
//     if (this != &other) {  // Проверка на самоприсваивание
//         Zimin_Product::operator=(other);  // Вызов оператора присваивания базового класса
//         device_type = other.device_type;
//         has_battery = other.has_battery;
//         weight = other.weight;
//     }
// }

// std::shared_ptr<Zimin_Product> Electronics::clone() const
// {
//     return std::make_shared<Zimin_Electronics>(*this);
// }


