#include "internal_data.h"

void InternalData::print_func()
{
	std::cout << "internal data print." << std::endl;

	// 测试改动，观察重编译了哪些文件
	//std::cout << "internal data another print." << std::endl;
}

