// Lab5-6.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Element.h"
#include "DerivedVisitor.h"
#include "Printer.h"
#include "PrinterType1.h"
#include "PrinterType2.h"

#include "gtest/gtest.h"
using namespace std;
/*
TEST(sample_test_case, sample_test)
{
	PrinterType1* p = new PrinterType1();
	PrinterType1* p1 = new PrinterType2();
	PrinterType1* p2 = new PrinterType1();
	Element<PrinterType1> *e  = new Element<PrinterType1>(*p);
	Element<PrinterType1> *e1 = new Element<PrinterType1>(*p1);
	Element<PrinterType1> *e2 = new Element<PrinterType1>(*p2);
	e->addLeft(e1);
	e->addRight(e2);
	ASSERT_TRUE((e->getLeft())==e1);
	ASSERT_TRUE((e->getRight())==e2);
}

int main(int argc, char** argv) 
{ 
    testing::InitGoogleTest(&argc, argv); 
    RUN_ALL_TESTS(); 
    std::getchar();
}
*/
int _tmain(int argc, _TCHAR* argv[])
{
	Visitor *v = new DerivedVisitor();
	PrinterType1* p = new PrinterType1();
	PrinterType1* p1 = new PrinterType2();
	PrinterType1* p2 = new PrinterType1();
	PrinterType1* p3 = new PrinterType2();
	PrinterType1* p4 = new PrinterType1();
	PrinterType1* p5 = new PrinterType2();
	PrinterType1* p6 = new PrinterType2();
	Element<PrinterType1> *e  = new Element<PrinterType1>(*p);
	Element<PrinterType1> *e1 = new Element<PrinterType1>(*p1);
	Element<PrinterType1> *e2 = new Element<PrinterType1>(*p2);
	Element<PrinterType1> *e3 = new Element<PrinterType1>(*p3);
	Element<PrinterType1> *e4 = new Element<PrinterType1>(*p4);
	Element<PrinterType1> *e5 = new Element<PrinterType1>(*p5);
	Element<PrinterType1> *e6 = new Element<PrinterType1>(*p6);
	e->addLeft(e1);
	e->addRight(e2);
	e1->addLeft(e3);
	e1->addRight(e4);
	e2->addLeft(e5);
	e2->addRight(e6);

	e->dfs(*v);
	system("pause");
	delete(e);
	delete(e1);
	delete(e2);
	delete(e3);
	delete(e4);
	delete(e5);
	delete(e6);
	return 0;
}
