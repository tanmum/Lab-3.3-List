//
//  Link.cpp
//  Lab 3.3 List
//
//  Created by Tan Bui on 4/3/14.
//  Copyright (c) 2014 tanbui. All rights reserved.
//

#include "Link.hpp"

Link::Link(void *i)				// Constructor
{
	item = i;					// Point to the item
	next = 0;					// No neighbor to start with
}

Link *Link::append(void *it)		// Append an item
{
	next = new Link(it);		// ... create that neighbor and have him hold the item
	return next;
}

Link *Link::append(Link *nextLink)
{
    next = nextLink;
    return nextLink;
}

Link::~Link()					// Destructor
{
	if (next)					// If there is a neighbor,
		delete next, next = 0;	// ... delete him
}