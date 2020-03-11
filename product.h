#include<iostream>
using namespace std;
#include<cstring>
#ifndef PRODUCT_H_
#define PRODUCT_H_

class product {
private:
	char title[20];
	float price;

public:
	product();
	product(const char *title, float price);
	float get_price();
	virtual void accept();  //virtual
	virtual void display();  //virtual
    virtual float cal_discount();




	virtual ~product();
};

#endif /* PRODUCT_H_ */

