#pragma once
#include "printer.h"
class PrinterType1 :
	public Printer
{
public:
	///Constructor
	PrinterType1(void);
	///Returns some text to identify object
	char* getText();
	///Accepting a visitor
	virtual void accept(Visitor &v);
	///Destructor
	~PrinterType1(void);
};

