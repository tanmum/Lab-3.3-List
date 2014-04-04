//
//  Service.h
//  Lab 3.3 List
//
//  Created by Tan Bui on 4/3/14.
//  Copyright (c) 2014 tanbui. All rights reserved.
//

#ifndef Lab_3_3_List_Service_h
#define Lab_3_3_List_Service_h

#include "String.hpp"

class Service
{
private:
    String agent;
    String date;
    String requester;
    String status;
    String comments;
    
public:
    Service(char *ag, char *dt, char *req, char *st, char *com);
	void show();
};

#endif
