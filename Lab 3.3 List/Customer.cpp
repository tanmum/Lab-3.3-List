//
//  Customer.cpp
//  Lab 3.3 List
//
//  Created by Tan Bui on 4/3/14.
//  Copyright (c) 2014 tanbui. All rights reserved.
//

#include "Customer.hpp"
Customer::Customer(char *nm, char *addr, char *ph, char *fx)	// Constructor
{
	name.setTo(nm);
	address.setTo(addr);
	phone.setTo(ph);
	fax.setTo(fx);
	credit = 0;						// Initialize the credit pointer
}

Customer::~Customer()				// Destructor method
{
	if (credit)						// If there is a credit object
	{								// ... and since it's been dynamically allocated by me
		delete credit;				// ... I delete it (creator must also destruct)
		credit = 0;					// ... and I make a note of it.
	}
}

int Customer::hasCredit()
{
	return !!credit;
}

void Customer::removeCredit()
{
	if (credit)
	{
		delete credit;
		credit = 0;
	}
}

void Customer::setCredit(char *acct, char *dt, float amt, float interest)
{
	if (credit)						// If there is already another credit
		removeCredit();				// ... remove it
    // ... and create the new one
	credit = new Credit(acct, dt, amt, interest);
	if (credit)
		credit->setCustomer(this);	// Let him know that I am his customer.
}


char *Customer::getName()
{
	return name.getStr();
}


void Customer::showCard()
{
	printf("Customer: %s\nPhone: %s\nFax: %s\n", name.getStr(), phone.getStr(), fax.getStr());
	
	if (credit)
		credit->show();
	else
		printf("No credit\n");
	printf("\n");
}

void Customer::setName(char *n)
{
	name.setTo(n);
}

void Customer::setAddress(char *n)
{
	address.setTo(n);
}

void Customer::setFax(char *n)
{
	fax.setTo(n);
}

void Customer::setPhone(char *n)
{
	phone.setTo(n);
}