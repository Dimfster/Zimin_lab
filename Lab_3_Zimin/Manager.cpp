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
        ar << *this;
        fout.close();
    }

}

void Zimin_Manager::loadZimin_Products(string name) {
	clearZimin_Products();
    ifstream fin;
    if (fin){
        fin.open(name, ios::in);
        boost::archive::text_iarchive ar(fin);
        ar >> *this;
        fin.close();
    }

}

void Zimin_Manager::createProduct()
{
    shared_ptr<Zimin_Product> p(new Zimin_Product("Новый продукт", "Неизвестен", 0.0));
    products.push_back(p);
}

void Zimin_Manager::createElectronic()
{
    shared_ptr<Zimin_Product> p(new Electronics("Неизвестно", false, 0.0));
    products.push_back(p);
}

void Zimin_Manager::deleteProduct(std::shared_ptr<Zimin_Product> p)
{
    products.erase(remove(products.begin(), products.end(), p), products.end());
}

void Zimin_Manager::draw(QPainter *painter, QVector<int>& columnsWidths, QStringList headers)
{
    int startX = 20;
    int startY = 20;
    int height = 30;

    int indentation = 0;
    for (int col = 0; col < columnsWidths.size(); col++){
        QRect headerRect(startX + indentation, startY, columnsWidths[col] + 20, height);
        indentation += columnsWidths[col] + 20;
        painter->drawRect(headerRect);
        painter->drawText(headerRect, Qt::AlignCenter, headers[col]);
    }
    startY += height;


    auto s = [&](shared_ptr<Zimin_Product> product){
        product->draw(painter, startX , ref(startY), columnsWidths, height);
    };
    std::for_each(products.begin(), products.end(), s);
}


std::vector<std::shared_ptr<Zimin_Product>> Zimin_Manager::getProducts()
{
    return products;
}


bool Zimin_Manager::isEmpty() const
{
    return products.empty();
}


Zimin_Manager::Zimin_Manager() {}

// Zimin_Manager::Zimin_Manager(const Zimin_Manager &other) {
//     for (const auto& product : other.products) {
//         products.push_back(std::make_shared<Zimin_Product>(*product->clone()));
//     }
// }

// Zimin_Manager &Zimin_Manager::operator=(const Zimin_Manager &other) {
//     if (this == &other) return *this;
//     products.clear();
//     for (const auto& product : other.products) {
//         if (auto electronics = std::dynamic_pointer_cast<Electronics>(product)) {
//             products.push_back(*electronics->clone());
//         }
//         else{
//             products.push_back(std::make_shared<Zimin_Product>(*product->clone()));
//         }

//     }
//     return *this;
// }

Zimin_Manager::~Zimin_Manager() {
    clearZimin_Products();
}


template<class Archive>
void Zimin_Manager::serialize(Archive &ar, const unsigned int version)
{
    ar & products;
}
