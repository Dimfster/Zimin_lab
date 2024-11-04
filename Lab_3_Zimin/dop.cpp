#include "Windows.h"
#include "Utils.h"
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
        cout << "2. Ввести данные о электронике" << endl;
        cout << "3. Вывести список товаров" << endl;
        cout << "4. Очистить список товаров" << endl;
        cout << "5. Сохранить список товаров" << endl;
        cout << "6. Загрузить список товаров из файла" << endl;
        cout << "0. Выход" << endl;
        switch (GetCorrectNumber(0, 6)) {
        case 0:
            return 0;
        case 1:
        {
            m.createZimin_Product();            
            break;
        }
        case 2:
        {
            m.createElectronics();
            break;
        }
        case 3:
            m.showZimin_Products();
            break;
        case 4:
            m.clearZimin_Products();
            break;
        case 5:
        {
            m.saveZimin_Products();
            break;
        }
        case 6:
            m.loadZimin_Products();
            break;
        default:
            break;
        }
        system("pause");
    };

    return 0;
}
