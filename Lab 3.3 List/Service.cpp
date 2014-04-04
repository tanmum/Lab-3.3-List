//
//  Service.cpp
//  Lab 3.3 List
//
//  Created by Tan Bui on 4/3/14.
//  Copyright (c) 2014 tanbui. All rights reserved.
//

#include <iostream>
#include "Service.hpp"
using namespace std;

Service::Service(char *ag, char *dt, char *req, char *st, char *com)
{
	agent.setTo(ag);
	date.setTo(dt);
	requester.setTo(req);
	status.setTo(st);
	comments.setTo(com);
}

void Service::show()
{
    cout << "Agent Name:   " << agent.getStr()	   << "\n";
    cout << "Date:         " << date.getStr()      << "\n";
    cout << "Requester:    " << requester.getStr() << "\n";
	cout << "Status:       " << status.getStr()    << "\n";
    cout << "Comments:     " << comments.getStr()  << "\n";
    cout << "\n";
}