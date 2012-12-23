#pragma once
#include "visitor.h"
class DerivedVisitor :
	public Visitor
{
public:
	///Constructor of Visitor class implementation
	DerivedVisitor(void);
	///Visit method for PrinterType1
	void visit(PrinterType1 *e);
	///Visit method for PrinterType2
	void visit(PrinterType2 *e);
	///Destructor
	~DerivedVisitor(void);
};

