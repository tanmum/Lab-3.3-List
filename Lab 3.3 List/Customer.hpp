//
//  Customer.h
//  Lab 3.3 List
//
//  Created by Tan Bui on 4/3/14.
//  Copyright (c) 2014 tanbui. All rights reserved.
//

#ifndef __Lab_3_3_List__Customer__
#define __Lab_3_3_List__Customer__

#include <iostream>
#include "String.hpp"
#include "Credit.hpp"

class Customer
{
private:
    // Attributes
    
	String name;
	String address;
	String phone;
	String fax;
    
	Credit *credit;				// Credit object created only if and when needed
    
    // Operations
    
public:
	
    // Constructors
    
	Customer(char *nm = 0, char *addr = 0, char *ph = 0, char *fx = 0);
    // Constructor with default parameter values
    
	~Customer();				// Destructor
    
	void setName(char *);		// Setting the name
	void setAddress(char *);	// Setting the address
	void setPhone(char *);		// Setting the phone
	void setFax(char *);		// Setting the fax number
	void setCredit(char *acct, char *dt, float amt, float interest);
    // Create the credit object, since needed
    // Setting the credit
	int hasCredit();			// True if credit is available
	void removeCredit();		// Remove credit
	Credit *getCredit() {return credit;}
    
	char *getName();			// Get Customer's name
	void showCard();			// Show Customer's info card
    
};

#endif /* defined(__Lab_3_3_List__Customer__) */
