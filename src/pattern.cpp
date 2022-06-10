#include "pattern.h"

void test_pimpl()
{
	Pimpl* ptr = new Pimpl();
	ptr->print_internal_class();
	ptr->print_internal_data();
	delete ptr;
}

void pattern_run()
{
	test_pimpl();
}