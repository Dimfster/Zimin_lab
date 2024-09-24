#include <iostream>
#include "Windows.h"
#include "Utils.h"
#include "Product.h"
#include "Manager.h"

using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    Zimin_Manager m;

    while (1) {
        system("cls");
        cout << "Выберите действие:" << endl;
        cout << "1. Ввести данные о товаре" << endl;
        cout << "2. Вывести список товаров" << endl;
        cout << "3. Очистить список товаров" << endl;
        cout << "4. Сохранить список товаров" << endl;
        cout << "5. Загрузить список товаров из файла" << endl;
        cout << "0. Выход" << endl;


        switch (GetCorrectNumber(0, 5)) {
        case 0:
            return 0;
        case 1:
        {
            m.createZimin_Product();
            break;
        }
        case 2:
            m.showZimin_Products();
            break;
        case 3:
            m.clearZimin_Products();
            break;
        case 4:
        {
            m.saveZimin_Products();
            break;
        }
        case 5:
            m.loadZimin_Products();
            break;
        default:
            break;
        }
    };

    return 0;
}
