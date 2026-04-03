#ifndef ORDER_H
#define ORDER_H
#include <string>
using namespace std;

class order
{
public:
    int    orderID;
    string customerName;
    string item;
    int    quantity;


    order();                                          // default constructor
    order(int id, string name, string it, int qty);  // parameterized constructor
    void display();                                   // print formatted order line as mentioned in the output
};

#endif
