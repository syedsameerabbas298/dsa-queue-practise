#include <iostream>
#include <string>
#include "Queue.h"
#include "Order.h"
#include<string>
using namespace std;

void processOrders(Queue<order>& q);   // you will implement this

int main()
{
    Queue<order> q(10);

    // --- starter: one object to verify your Order.cpp compiles ---
    order o1(1, "Ali", "Pizza", 2);
    q.Enqueue(o1);
    cout << "Order placed: " << o1.customerName
        << " ordered " << o1.item
        << " x" << o1.quantity << endl;

    order o2(2, "sameer", "burger", 1);
    q.Enqueue(o2);
    cout << "Order placed: " << o2.customerName
        << " ordered " << o2.item
        << " x" << o2.quantity << endl;

    order o3(3, "zaki", "wrap", 2);
    q.Enqueue(o3);
    cout << "Order placed: " << o3.customerName
        << " ordered " << o3.item
        << " x" << o3.quantity << endl;

    order o4(4, "Awab", "latte", 1);
    q.Enqueue(o4);
    cout << "Order placed: " << o4.customerName
        << " ordered " << o4.item
        << " x" << o4.quantity << endl;

    // Process all orders
    cout << "\n    Processing Orders    " << endl;
    processOrders(q);

    // TODO: enqueue o2..o5, call processOrders(), isEmpty() check,
    //       and the runtime-input loop for 3 more orders.

    for (int i = 0; i < 3; i++) {
        int id, qty;
        string name; 
        string item;
        cout << "Order ID: ";
        cin >> id;
        cin.ignore(); 
        cout << "Customer Name: ";
        getline( cin,name);
        cout << "Item: ";
        getline( cin,item);
        cout << "Quantity: ";
        cin >> qty;
        cin.ignore();

        order o(id, name, item, qty);
        q.Enqueue(o);
        cout << "Order placed: " << o.customerName << " ordered " << o.item << " x" << o.quantity << endl;
    }
    cout << "\n    Processing Orders    " << endl;
    processOrders(q);//shows new proccessed orders
    return 0;
}

void processOrders(Queue<order>& q)
{
    int count = 0;
    while (!q.isEmpty())
    {
        order o = q.Dequeue(); //stores dequeued value 
        o.display();
        count++;
    }
    cout << "\nTotal orders fulfilled: " << count << endl;
    if (q.isEmpty())
        cout << "No pending orders." << endl;
}