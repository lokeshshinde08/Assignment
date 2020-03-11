#include<iostream>
using namespace std;
#include"product.h"




product::product() {
		strcpy(this->title, "");
		this->price = 0.0;
	}

product::product(const char *title, float price) {
		strcpy(this->title, title);
		this->price = price;
	}
float product::get_price() {
		return this->price;
	}
void product::accept() {
		cout << "title: ";
		cin >> this->title;
		cout << "price: ";
		cin >> this->price;
	}

void product::display() {
		cout << "title: " << this->title << endl;
		cout << "price: " << this->price << endl;
	}
float product::cal_discount(){
return  this->get_price();
}
product::~product() {
	// TODO Auto-generated destructor stub
}

