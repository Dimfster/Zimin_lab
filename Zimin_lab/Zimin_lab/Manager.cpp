#include "Manager.h"
#include "Utils.h"
#include <filesystem>

using namespace std;


void Zimin_Manager::createZimin_Product() {
	system("cls");
	Zimin_Product* p = new Zimin_Product;
	cin >> *p;
	products.push_back(p);
}

void Zimin_Manager::showZimin_Products() {
	system("cls");
	if (products.empty()) {
		cout << "������� ��� ��������� ���!" << endl;
		system("pause");
		return;
	}
	cout << "������ ��������� �������:" << endl;
	for (auto product : products) {
		cout << *product << endl;
	}
	cout << endl;
	system("pause");
}


void Zimin_Manager::clearZimin_Products() {
	system("cls");
	if (products.empty()) {
		cout << "������� ��� ������� ���!" << endl;
		system("pause");
		return;
	}
	for (auto product : products) {
		delete product;
	}
	products.clear();

	if (products.empty()) {
		cout << "������ ������� �������!" << endl;
		system("pause");
		return;
	}
}

void Zimin_Manager::saveZimin_Products() {
	system("cls");
	if (!products.empty()) {
		cout << "������� ��� ����� ����������:" << endl;
		string name = input_string();
		name = "Saves\\" + name + ".txt";
		ofstream file;
		file.open(name, ios::out);
		file << products.size() << endl;
		for (auto& product : products) {
			file << *product;
		}
		file.close();
		cout << "������� ���������!" << endl; system("pause");
	}
	else { cout << "���������� �� ������ ���� ������! �������� ��������� �������." << endl; system("pause"); }
}

void Zimin_Manager::loadZimin_Products() {
	system("cls");
	ifstream file;
	std::string path = "Saves\\";
	vector<filesystem::directory_entry> names;
	int count = 0;
	for (auto& name : filesystem::directory_iterator(path)) {
		count++;
		names.push_back(name);
		cout << count << ". " << name.path().filename() << endl;
	}
	cout << "�������� ����� ����� ����������" << endl;
	int save = GetCorrectNumber(1, count);

	products.clear();
	int count_products;

	file.open(names[save - 1]);
	file >> count_products;


	while (count_products--)
	{
		Zimin_Product* p = new Zimin_Product;
		file >> *p;
		products.push_back(p);
	}
	file.close();
	cout << "���� ��������!\n" << endl;
	system("pause");
}

Zimin_Manager::Zimin_Manager() {
	cout << "������ ��������� :)" << endl;
}

Zimin_Manager::~Zimin_Manager() {
	for (auto product : products) {
		delete product;
	}
	products.clear();
	cout << "������ ��������� :)" << endl;
}

