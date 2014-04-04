//
//  String.h
//  Lab 3.3 List
//
//  Created by Tan Bui on 4/3/14.
//  Copyright (c) 2014 tanbui. All rights reserved.
//

#ifndef Lab_3_3_List_String_h
#define Lab_3_3_List_String_h

#include <stdio.h>

class String						// The FILE data type is defined in stdio.h
{
private:
    
	long length;					// character string length
	char *s;						// Actual data
    
	void stncpy(char *dest, char *src, long n); // Copy n characters of src into dest
	void initCopy(char *str);		// Initial Copy of char string
	void create(long i);			// create a character string of length i
	long strLen(char *t);			// Return length of t
	void copy(char *str);			// Copy contents of str into local char string
	long maX(long l, long m);		// returns biggest long
    
public:
    
	String(char *str = 0);			// String initialized with a char string
	String(long l);					// String with initial length of l
	
	~String();						// Destructor to clean up when object is gone
    
	void prt(FILE *f = 0);			// Print out current contents into f
	long ln();						// Return current content's length
	void clear();					// Clear out entire contents
	void setTo(char *t);			// Set String to t char string
	char *getStr(){return s;};		// Get char string
};

#endif
