#include <iostream>
using namespace std;
#include "book.h"

book::book() {
		this->pages = 0;
	}
book::book(const char *title, float price, int pages)
	:product(title, price) {
		this->pages = pages;
	}
	// getter/setter

void book::set_pages(int pages)
{
	this->pages=pages;
}

	void book::accept() {
		product::accept();
		cout << "pages: ";
		cin >> this->pages;
	}
	void book::display() {
		product::display();
		cout << "pages: " << this->pages << endl;
	}
	float book::cal_discount(){
		return this->get_price()*0.90;
	}
book::~book() {
	// TODO Auto-generated destructor stub
}

