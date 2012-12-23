#include "StdAfx.h"
#include "PrinterType1.h"


PrinterType1::PrinterType1(void)
{
}

char* PrinterType1::getText()
{
	return "PrinterType1";
}

void PrinterType1::accept(Visitor &v)
{
	v.visit(this);
}

PrinterType1::~PrinterType1(void)
{
}
