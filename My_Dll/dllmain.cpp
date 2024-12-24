// dllmain.cpp : Определяет точку входа для приложения DLL.
#include "pch.h"
#include "Manager.h"

BOOST_CLASS_VERSION(Electronics, 2)
BOOST_CLASS_EXPORT(Electronics)

BOOST_CLASS_VERSION(Zimin_Product, 1)
BOOST_CLASS_EXPORT(Zimin_Product)

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

Zimin_Manager DeserializeFromFile(const std::string& filename) {
    Zimin_Manager manager;
    std::ifstream fin;
    fin.open(filename);
    boost::archive::text_iarchive ar(fin);
    ar >> manager.products;
    return manager;
}

void SerializeToFile(const std::string& filename, const Zimin_Manager& manager) {
    std::ofstream out(filename);
    boost::archive::text_oarchive oa(out);
    oa << manager.products;
}

extern "C"
{
    __declspec(dllexport) int GetProductsSize(char* filename)
    {
        Zimin_Manager manager = DeserializeFromFile(filename);
        return (int)manager.products.size();
    }

    __declspec(dllexport) void GetProducts(char* filename, ZiminProductOrElectronicsStruct* array)
    {
        Zimin_Manager manager = DeserializeFromFile(filename);
        for (size_t i = 0; i < manager.products.size(); ++i) {
            array[i] = manager.products[i]->getStruct();
        }
    }

    __declspec(dllexport) void SaveProducts(char* filename, int size, ZiminProductOrElectronicsStruct* array)
    {
        Zimin_Manager manager;
        manager.products.reserve(size);
        for (size_t i = 0; i < size; ++i) {
            if (!array[i].is_electronics) {
                auto product = Zimin_Product(array[i]);
                auto product_ptr = std::make_shared<Zimin_Product>(product);
                manager.products.push_back(product_ptr);
            }
            else {
                auto electronics = Electronics(array[i]);
                auto electronics_ptr = std::make_shared<Electronics>(electronics);
                manager.products.push_back(electronics_ptr);
            }
        }
        SerializeToFile(filename, manager);
    }
}

