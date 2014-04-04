//
//  Link.h
//  Lab 3.3 List
//
//  Created by Tan Bui on 4/3/14.
//  Copyright (c) 2014 tanbui. All rights reserved.
//

#ifndef Lab_3_3_List_Link_h
#define Lab_3_3_List_Link_h

class Link									// This is a class used only by List
{
private:
	void *item;								// The item this Link holds
	Link *next;								// This Link's next neighbor
public:
	Link(void *i);							// Constructor taking this Link's item
	Link *getNextLink() {return next;}		// Return this Link's neighbor
	~Link();								// Destructor
	void *getItem() {return item;}			// Get this Link's item
	Link *append(void *it);					// Append this item to the list of Links
    Link *append(Link* nextLink);           // Append another Link next to this Link
};

#endif
