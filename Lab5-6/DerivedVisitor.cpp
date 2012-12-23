#include "StdAfx.h"
#include "DerivedVisitor.h"
#include <iostream>

#include "PrinterType1.h"
#include "PrinterType2.h"

DerivedVisitor::DerivedVisitor(void)
{
}

void DerivedVisitor::visit(PrinterType1 *e)
{
	std::cout << "Now doing something with " << e->getText() <<'\n';
}

void DerivedVisitor::visit(PrinterType2 *e)
{
	std::cout << "Now doing something with " << e->getText() <<'\n';
}

DerivedVisitor::~DerivedVisitor(void)
{
}
