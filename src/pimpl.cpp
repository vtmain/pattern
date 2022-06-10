#include "pimpl.h"

class Pimpl::InternalClass
{
public:
	InternalClass() {}
	~InternalClass() {}

public:
	void print_func();
};

void Pimpl::InternalClass::print_func()
{
	std::cout << "internal class print." << std::endl;
}

Pimpl::~Pimpl()
{
	if (pdata)
		delete pdata;
}

void Pimpl::print_internal_class()
{
	InternalClass* p = new InternalClass();
	p->print_func();
	delete p;
}

void Pimpl::print_internal_data()
{
	pdata->print_func();
}
