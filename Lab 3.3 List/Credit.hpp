//
//  Credit.h
//  Lab 3.3 List
//
//  Created by Tan Bui on 4/3/14.
//  Copyright (c) 2014 tanbui. All rights reserved.
//

#ifndef __Lab_3_3_List__Credit__
#define __Lab_3_3_List__Credit__

#include <iostream>
#include "String.hpp"

class Customer;

class Credit
{
private:
	float amount;
	String date;
	String accountNumb;
	float interest;
	Customer *customer;				// My pointer to my customer
    
public:
	Credit(char *acct, char *dt, float amt, float interest);
	void setCustomer(Customer *c) { customer = c;}
	float getAmount() { return amount; };
	void show();
	void quickReport();
};

#endif /* defined(__Lab_3_3_List__Credit__) */
