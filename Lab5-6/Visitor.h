#pragma once
#include "stdafx.h"
///Argument for visit-methods
class PrinterType1;
///Argument for visit-methods
class PrinterType2;

class Visitor
{
public:
	///Pure virtual function for PrinterType1 class objects
    virtual void visit(PrinterType1 *e) = 0;
    ///Pure virtual function for PrinterType2 class objects
	virtual void visit(PrinterType2 *e) = 0;
};