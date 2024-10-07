#pragma once
#include <iostream>
#include <string>

#include <boost/serialization/export.hpp>

#include <boost/archive/text_oarchive.hpp>
#include <boost/archive/text_iarchive.hpp>

#include <boost/serialization/string.hpp>
#include <boost/serialization/shared_ptr.hpp>

#include <boost/serialization/split_member.hpp>
#include <boost/serialization/version.hpp>

class Zimin_Product
{
private:
	friend class boost::serialization::access;

protected:
	std::string name;
	std::string manufacturer;
	float price;
	unsigned int id;
	static unsigned int MaxId;

public:
	BOOST_SERIALIZATION_SPLIT_MEMBER();
	Zimin_Product();
	virtual ~Zimin_Product();

	virtual void writeInfo();

	virtual void printInfo();

	template<class Archive>
	void save(Archive& ar, const unsigned int version) const;

	template<class Archive>
	void load(Archive& ar, const unsigned int version);
};
