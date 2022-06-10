#include "pimpl.h"
#include "internal_data.h"

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

	// 测试改动，观察重编译了哪些文件
	//std::cout << "internal class another print." << std::endl;
}

Pimpl::Pimpl()
{
	pdata = new InternalData();
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
