//
//  List.h
//  Lab 3.3 List
//
//  Created by Tan Bui on 4/3/14.
//  Copyright (c) 2014 tanbui. All rights reserved.
//

#ifndef Lab_3_3_List_List_h
#define Lab_3_3_List_List_h

#include "Link.hpp"

class List
{
private:
	Link *start;			// Start Link
	Link *end;				// End Link
	Link *current;			// Link the List is currently traversing (or 0 if not traversing)
    
public:
	List(){start = 0; end = 0; current = 0;}		// Initialize all pointers
	~List() {if (start) delete start, start = 0;}	// Empty the list of all its links
	List& append(void *);							// Append an object in list
	void *getNextItem();							// Get to next item, if traversing the links
	void *restart();								// Start traversal from fisrt item and return it
    int getCount();
    List& insert(void*);
};

#endif
