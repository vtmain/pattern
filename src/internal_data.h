#pragma once

#include <stdio.h>
#include <iostream>

class InternalData
{
public:
	InternalData() {}
	~InternalData() {}

public:
	inline void print_func()
	{
		std::cout << "internal data print." << std::endl;
	}
};

