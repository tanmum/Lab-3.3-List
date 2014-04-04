//
//  Credit.cpp
//  Lab 3.3 List
//
//  Created by Tan Bui on 4/3/14.
//  Copyright (c) 2014 tanbui. All rights reserved.
//

#include "Credit.hpp"
#include "Customer.hpp"

Credit::Credit(char *acct, char *dt, float amt, float in)
{
	if (acct)
		accountNumb.setTo(acct);
    
	if (dt)
		date.setTo(dt);
    
	amount = amt;
	interest = in;
}

void Credit::show()
{
	printf("Credit Amount: %f\nDate: %s\nInterest: %f\n\n",amount , date.getStr(), interest);
}

void Credit::quickReport()
{
	if (customer)
		printf("Customer: %s\nAmount: %f\n", customer->getName(), amount);
}