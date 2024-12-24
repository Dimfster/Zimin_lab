#include "Manager.h"
#include "Utils.h"
#include <vector>
#include <fstream>
#include <filesystem>
#include <memory>

using namespace std;


void Zimin_Manager::createZimin_Product() {
	shared_ptr<Zimin_Product> p(new Zimin_Product);
	p->writeInfo();
	products.push_back(p);
}

void Zimin_Manager::createElectronics() {
	shared_ptr<Zimin_Product> p(new Electronics);
	p->writeInfo();
	products.push_back(p);
}

void Zimin_Manager::showZimin_Products() {
	if (products.empty()) {
		cout << "������� ��� ��������� ���!" << endl;
		return;
	}
	cout << "������ ��������� �������:" << endl;
	for (auto product : products) {
		product->printInfo();
	}
	cout << endl;
}


void Zimin_Manager::clearZimin_Products() {
	if (products.empty()) {
		cout << "������� ��� ������� ���!" << endl;
		return;
	}
	products.clear();
	if (products.empty()) {
		cout << "������ ������� �������!" << endl;
		return;
	}
}

void Zimin_Manager::saveZimin_Products() {
	if (!products.empty()) {
		cout << "������� ��� ����� ����������:" << endl;
		string name = input_string();
		name = "Saves\\" + name + ".txt";

		ofstream fout;
		fout.open(name, ios::out);
		boost::archive::text_oarchive ar(fout);
		ar << products;
		fout.close();
		cout << "������� ���������!" << endl;
	}
	else { cout << "���������� �� ������ ���� ������! �������� ��������� �������." << endl;}
}

void Zimin_Manager::loadZimin_Products() {
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

	clearZimin_Products();

	ifstream fin;
	fin.open(names[save - 1]);
	boost::archive::text_iarchive ar(fin);
	ar >> products;
	fin.close();
	cout << "���� ��������!\n" << endl;
}

Zimin_Manager::Zimin_Manager() {
	cout << "�������� ������ �� ������ :)" << endl;
}

Zimin_Manager::~Zimin_Manager() {
	//clearZimin_Products();
	cout << "�������� ���� ����� :)" << endl;
}
