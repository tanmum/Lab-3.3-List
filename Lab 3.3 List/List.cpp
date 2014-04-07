//
//  List.cpp
//  Lab 3.3 List
//
//  Created by Tan Bui on 4/3/14.
//  Copyright (c) 2014 tanbui. All rights reserved.
//

#include "List.hpp"

List& List::append(void *item)					// Append an item
{
	if (!start)
	{
		start = new Link(item);					// Create the first link to this item
		end = start;							// first item is also last (one single item)
	}
	else
		if (end)
			end = end->append(item);			// Delegate this append to last link
    return *this;
}												// Make that new one the end

void *List::restart()							// Restart from first item
{
	void *ret = 0;
    
	current = start;							// Make current point to start link
    
	if (current)
		ret = current->getItem();				// Return start item, if any
    
	return ret;									// Return either 0 or firts item
}

void *List::getNextItem()						// Return item next to current, if any
{
	void *ret = 0;
	
	if (current)								// If there is a current item
		if (current = current->getNextLink())	// if there is a next-to-current item
			ret = current->getItem();			// return it
    
	return ret;									// Return either 0 or the next item
}

int List::getCount()
{
    Link* go = start;
    if (!go || !end) {
        return 0;
    }
    
    int count = 1;
    while (go != end) {
        count++;
        go = go->getNextLink();
    }
    return count;
}

List& List::insert(void * item)
{
    if (!start)
	{
		start = new Link(item);					// Create the first link to this item
		end = start;							// first item is also last (one single item)
	}
    else
    {
        auto newLink = new Link(item);
        newLink->append(start);
        start = newLink;
    }
    return *this;
}
