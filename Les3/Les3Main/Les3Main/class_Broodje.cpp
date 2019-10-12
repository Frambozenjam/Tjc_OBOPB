#include "pch.h"
#include <iostream>
#include <string>
#include "class_Broodje.h"
#include "class_Broodmandje.h"


class_Broodje::class_Broodje()
{
	std::cout << "Broodje default ctor" << std::endl;
}

class_Broodje::~class_Broodje()
{
}

class_Broodje::class_Broodje(std::string s_HetType) : s_Type(s_HetType) {
	std::cout << "Broodje ctor: " << s_HetType << std::endl;
}
