#pragma once
#include "PrinterType1.h"
class PrinterType2 :
	public PrinterType1
{
public:
	///Constructor
	PrinterType2(void);
	///Returns some text to identify object
	char* getText();
	///Accepting a visitor
	void accept(Visitor &v);
	///Destructor
	~PrinterType2(void);
};

