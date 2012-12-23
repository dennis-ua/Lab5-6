#include "StdAfx.h"
#include "PrinterType2.h"


PrinterType2::PrinterType2(void)
{
}

char* PrinterType2::getText()
{
	return "PrinterType2";
}

void PrinterType2::accept(Visitor &v)
{
	v.visit(this);
}

PrinterType2::~PrinterType2(void)
{
}
