#include "Product.h"

using namespace std;

BOOST_CLASS_VERSION(Zimin_Product, 1)
BOOST_CLASS_EXPORT(Zimin_Product)

unsigned int Zimin_Product::MaxId = 1;


QVector<int> Zimin_Product::getColumnWidth(QPainter* painter) const
{
    QStringList data = getParameters();
    QVector<int> widths(data.size(), 0);

    for (int i = 0; i < data.size(); i++)
        widths[i] = painter->fontMetrics().horizontalAdvance(data[i]);

    return widths;
}

void Zimin_Product::draw(QPainter *painter, int x, int &y, QVector<int>& column_widths, int height) const
{
    QStringList parameters = getParameters();
    int indentation = 0;
    for (int i = 0; i < column_widths.size(); i++){
        QRect headerRect(x + indentation, y, column_widths[i] + 20, height);
        indentation += column_widths[i] + 20;
        painter->drawRect(headerRect);
        if (i < parameters.size()){
            painter->drawText(headerRect, Qt::AlignCenter, parameters[i]);
        }
        else{
            painter->drawText(headerRect, Qt::AlignCenter, "-");
        }

    }
    y += height;
}


void Zimin_Product::setName(const QString name) {
    this->name = name.toLocal8Bit();
}

void Zimin_Product::setManufacturer(const QString manufacturer) {
    this->manufacturer = manufacturer.toLocal8Bit();
}

void Zimin_Product::setPrice(const float price) {
    this->price = price;
}

QStringList Zimin_Product::getParameters() const
{
    return QStringList({QString::number(id),
                        QString::fromLocal8Bit(name),
                        QString::fromLocal8Bit(manufacturer),
                        QString::number(price)});
}


Zimin_Product::Zimin_Product() {
    // id = MaxId++;
    MaxId = id > MaxId ? id : MaxId;
}

Zimin_Product::Zimin_Product(QString name,QString manufacturer, float price)
    : id(++MaxId)
    , name(name.toLocal8Bit())
    , manufacturer(manufacturer.toLocal8Bit())
    , price(price)
{
  //  MaxId = id > MaxId ? id : MaxId;
}


// Zimin_Product::Zimin_Product(const Zimin_Product &other)
// {
//     if (this != &other) {  // Проверка на самоприсваивание
//         id = other.id;
//         name = other.name;
//         manufacturer = other.manufacturer;
//         price = other.price;
//     }
// }


// std::shared_ptr<Zimin_Product> Zimin_Product::clone() const
// {
//     return std::make_shared<Zimin_Product>(*this);
// }


template<class Archive>
void Zimin_Product::serialize(Archive &ar, const unsigned int version)
{
    ar & name;
    ar & manufacturer;
    ar & price;
    ar & id;
    MaxId = id > MaxId ? id : MaxId;
}
