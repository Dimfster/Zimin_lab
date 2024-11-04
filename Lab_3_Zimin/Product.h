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
	unsigned int id;
	static unsigned int MaxId;

	template<class Archive>
	void save(Archive& ar, const unsigned int version) const;

	template<class Archive>
	void load(Archive& ar, const unsigned int version);



public:
    BOOST_SERIALIZATION_SPLIT_MEMBER()
    Zimin_Product();
    virtual ~Zimin_Product();

    QVector<int> getColumnWidth(QPainter*);
    virtual void draw(QPainter *painter, int x, int &y, QVector<int>& column_widths, int height);

    virtual QStringList getParameters();


};

#endif
