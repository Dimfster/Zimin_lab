#ifndef PRODUCT_H
#define PRODUCT_H



#include "pch.h"

class Zimin_Product
{
private:
	friend class boost::serialization::access;

protected:
	std::string name = "";
	std::string manufacturer = "";
	float price = 0;
    unsigned int id = 0;
    static unsigned int MaxId;

    template<class Archive>
    void serialize(Archive& ar, const unsigned int version);

public:
    Zimin_Product();
    Zimin_Product(QString name, QString manufacturer, float price);
    // Zimin_Product(const Zimin_Product& other);
    virtual ~Zimin_Product() = default;

    // virtual std::shared_ptr<Zimin_Product> clone() const;


    QVector<int> getColumnWidth(QPainter*) const;
    virtual QStringList getParameters() const;

    virtual void draw(QPainter *painter, int x, int &y, QVector<int>& column_widths, int height) const;


    void setName(const QString name);
    void setManufacturer(const QString manufacturer);
    void setPrice(const float price);

};

#endif
