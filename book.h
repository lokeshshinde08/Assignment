#include"product.h"
#ifndef BOOK_H_
#define BOOK_H_

class book :public product {
private :
	int pages;
public:
	book();
	book(const char *title, float price, int pages);
	void accept();
	void display();
	void set_pages(int pages);
	int get_pages();
	virtual float cal_discount();
	virtual ~book();
};

#endif /* BOOK_H_ */
