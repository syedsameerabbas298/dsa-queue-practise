#include "order.h"
#include<iostream>
order::order() {
	orderID = 0;
	quantity = 0;
}

order::order(int id, string name, string it, int qty):orderID(id),customerName(name),item(it),quantity(qty){}
void order::display()
{
	cout << "fullfilled | order# " << orderID<<" coustomer: " << customerName << " item| " << item << " quantity: " << quantity << endl;
}