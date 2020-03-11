#include<iostream>
using namespace std;
#include"book.h"
#include"tape.h"
#include"product.h"

int main()
{
	int choice,i;
	float sum,total;
    product* arr[3];

for(i=0;i<3;i++)
{
    cout<<"01.book\t02.tape"<<endl;
	cout<<"Enter Choice\n";
	cin>>choice;
	switch(choice)
	{
	case 1:
		  arr[i]=	new book;
		  break;
	case 2:
		  arr[i]=new tape;
		  break;

	}
	arr[i]->accept();
}

/*for(i=0;i<3;i++){
arr[i]->display();
cout<<"display call\n";
}*/
for(i=0;i<3;i++)
{
	total=total+arr[i]->get_price();
//cout<<"total called\n";
}

cout<<"Price Before"<<total<<endl;

for(i=0; i<3; i++)
sum = sum + arr[i]->cal_discount();
	cout << "total Price After Discount\n: " << sum << endl;

	for(i=0; i<3; i++)
			delete arr[i];
};



