#pragma once
#include <iostream>
#include "Visitor.h"

class Printer
{
public:
	///Constructor
	Printer(void);
	///Returns some text to identify object
	virtual char* getText()
	{
			return "Printer";
	};
	///Accepting a visitor
	virtual void accept(Visitor &v)=0;
	///Destructor
	~Printer(void);
};
