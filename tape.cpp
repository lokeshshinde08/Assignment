#include <iostream>
using namespace std;
#include "tape.h"


tape::tape() {
		this->duration = 0;
	}
tape::tape(const char *title, float price, int duration)
	:product(title, price) {
		this->duration = duration;
	}
	// getter/setter
	void tape::accept() {
		product::accept();
		cout << "duration: ";
		cin >> this->duration;
	}
	void tape::display() {
		product::display();
		cout << "duration: " << this->duration << endl;
	}
	void tape::set_duration(int duration){

		this->duration=duration;
	}

	int tape::get_duration()
	{
		return this->duration;
	}

	float tape::cal_discount(){
		return this->get_price()*0.95;
	}
tape::~tape() {
	// TODO Auto-generated destructor stub
}

