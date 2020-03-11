#include"product.h"
#ifndef TAPE_H_
#define TAPE_H_

class tape :public product {
private:
	int duration;

public:
	tape();
	tape(const char *title, float price, int duration);
	void accept();
	void display();
	void set_duration(int duration);
	int get_duration();
	float cal_discount();
	virtual ~tape();
};

#endif  /*TAPE_H_*/

