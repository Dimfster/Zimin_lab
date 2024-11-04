#include "Manager.h"

using namespace std;

void Zimin_Manager::clearZimin_Products() {
	products.clear();
}

void Zimin_Manager::saveZimin_Products(string name) {
    ofstream fout;
    if (fout){
        fout.open(name, ios::out);
        boost::archive::text_oarchive ar(fout);
        ar << products;
        fout.close();
    }

}

void Zimin_Manager::loadZimin_Products(string name) {
	clearZimin_Products();
    ifstream fin;
    if (fin){
        fin.open(name, ios::in);
        boost::archive::text_iarchive ar(fin);
        ar >> products;
        fin.close();
    }

}

void Zimin_Manager::draw(QPainter *painter, int x, int &y, QVector<int>& column_widths, int height)
{
    std::for_each(products.begin(), products.end(),
                  bind(&Zimin_Product::draw,std::placeholders::_1, painter, x, std::ref(y), column_widths, height));
}


std::vector<std::shared_ptr<Zimin_Product> > Zimin_Manager::getProducts()
{
    return products;
}


bool Zimin_Manager::isEmpty() const
{
    return products.empty();
}


Zimin_Manager::Zimin_Manager() {}

Zimin_Manager::~Zimin_Manager() {
    clearZimin_Products();
}



