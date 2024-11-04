#include "Product.h"

using namespace std;

BOOST_CLASS_VERSION(Zimin_Product, 1)
BOOST_CLASS_EXPORT(Zimin_Product)

unsigned int Zimin_Product::MaxId = 1;
static int MAX_PRICE = 10000000;


QVector<int> Zimin_Product::getColumnWidth(QPainter* painter)
{
    QStringList data = getParameters();
    QVector<int> widths(data.size(), 0);

    for (int i = 0; i < data.size(); i++)
        widths[i] = painter->fontMetrics().horizontalAdvance(data[i]);

    return widths;
}

void Zimin_Product::draw(QPainter *painter, int x, int &y, QVector<int>& column_widths, int height)
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

QStringList Zimin_Product::getParameters()
{
    return QStringList({QString::number(id),
                        QString::fromLocal8Bit(name),
                        QString::fromLocal8Bit(manufacturer),
                        QString::number(price)});
}

Zimin_Product::Zimin_Product() {
	id = MaxId++;
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

Zimin_Product::~Zimin_Product() {}
