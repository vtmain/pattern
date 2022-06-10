#pragma once

#include <stdio.h>
#include <iostream>
#include <sstream>
#include "internal_data.h"

//class InternalData;

class Pimpl
{
public:
	Pimpl()
		: pdata(new InternalData())
	{}
	~Pimpl();

public:
	void print_internal_class();
	void print_internal_data();

private:

	// 第一种实现
	class InternalClass;

	// 第二种实现
	InternalData* pdata;
};
