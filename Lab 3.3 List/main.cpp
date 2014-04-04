//
//  main.cpp
//  Lab 3.3 List
//
//  Created by Tan Bui on 4/3/14.
//  Copyright (c) 2014 tanbui. All rights reserved.
//

#include <iostream>
#include "List.hpp"
#include "Service.hpp"
#include "Customer.hpp"
using namespace std;

int main(int argc, const char * argv[])
{
    // First, exercise the List with Services objects...
	Service services[] =
    {
        Service("John", "6/4/2002", "Barbara", "pending", "Low priority"),
        Service("Jenny", "7/27/2002", "Laura", "underway", "High priority"),
        Service("Larry", "8/9/2001", "Rebecca", "done", "High priority"),
        Service("Albert", "8/05/2002", "Barbara", "underway", "Normal priority")
    };
    
	List serviceList;									// Our list of services
	int size = sizeof(services) / sizeof(Service);		// Our array size
	for (int i = 0; i < size; i++)						// For all services in the array
		serviceList.append(&services[i]);				// Append them in the serviceList
    
	// Show all services in the list
	for (Service *service = (Service *) serviceList.restart(); service != 0; )
	{
		service->show();
		service = (Service *) serviceList.getNextItem();
	}
	cout << endl;
    
    
	// Customers to be used in the list
    Customer customers[] =
    {
        Customer ("Object Discovery", "701 N Court", "641-472-6050", "641-469-5252"),
        Customer ("Kinko", "1234 South Madison", "405-203-3450", "123-425-9880"),
        Customer ("First Baptist Church", "103 N 4th", "485-993-9900", "485-993-9901")
    };
    
	// The List instance to be tested
	List customerList;
    
	// Append all Customers; remember: this list takes object pointers:
    for (int i = 0; i < sizeof(customers)/sizeof(Customer); i++) {
        customerList.append(&customers[i]);
    }
	
	// Show all customers that are in that list:
    Customer *go = (Customer*) customerList.restart();
    while (go) {
        go->showCard();
        go = (Customer*) customerList.getNextItem();
    }
    
	// Print out the number of customer objects in the list:
    cout << "Number of customer: " << customerList.getCount() << endl;
    
	//system("PAUSE");
    return 0;
}

