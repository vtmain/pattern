#include "internal_data.h"

void InternalData::print_func()
{
	std::cout << "internal data print." << std::endl;

	// 测试改动，观察重编译了哪些文件(隐藏类修改，不需要重新编译原类)
	//std::cout << "internal data another print." << std::endl;
}

void InternalData2::print_func()
{
	std::cout << "internal data2 print." << std::endl;

	// 测试改动，观察重编译了哪些文件(隐藏类修改，不需要重新编译原类)
	//std::cout << "internal data2 another print." << std::endl;
}
