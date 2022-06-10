/************************************************************************
*  FileName:	pimpl
*  Description:	私有化实现 PIMPL（Private Implementation 或 Pointer to Implementation）
*               通过一个私有的成员指针，将指针所指向的类的内部实现数据进行隐藏
*               优点：
*                 1.保护核心数据和实现原理
*                 2.降低编译依赖，提高编译速度
*                 3.接口与实现分离
*  Author:		phil
*  Date:		2022-04-12
*  Version:
************************************************************************/
#pragma once
#include <stdio.h>
#include <iostream>
#include <sstream>

// 头文件放在cpp中包含，这里只声明一下
//#include "internal_data.h"  
class InternalData;
//class InternalData2;

// 使用 InternalData2 data2 声明类型时，就必须在此处包含头文件了，否则会报错：不允许使用不完整的类型
//#include "internal_data.h"

class Pimpl
{
public:
	Pimpl();
	~Pimpl();

public:
	void print_internal_class();
	void print_internal_data();
	void print_internal_data2();

private:

	// 第一种实现
	// 将敏感数据封装在InternalClass中，InternalClass的实现在.cpp中而不是在.h
	// 这样在改动InternalClass内容时，就避免了包含pimpl.h的文件被全部重新编译（降低编译依赖）
	// 兼顾了扩展性，又能避免重复无效的编译
	class InternalClass;

	// 第二种实现
	// 将敏感数据封装在InternalData中，此处用指针类型保存一个成员变量
	// 为什么不用 InternalData data 形式(非指针)直接声明，是因为用类型来声明变量的话，改动会引起此处重编译
	// 而指针仅仅是一个指针，大小不会改变，不会引起重编译
	// 1. 当定义 new Pimpl 或 Pimpl p1 时，编译器生成的代码中不会掺杂InternalData的信息
	// 2. 当使用Pimpl对象时，与InternalData无关，InternalData被通过指针封装彻底的与实现分离
	InternalData* pdata;

	// 用声明的方式做对比测试
	//InternalData2 data2;
};
