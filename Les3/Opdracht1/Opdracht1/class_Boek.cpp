#include "pch.h"
#include <iostream>
#include <string>
#include "class_Bibliotheek.h"
#include "class_Boek.h"


class_Boek::class_Boek()
{
	std::cout << "	Boek: default ctor" << std::endl;
}

class_Boek::~class_Boek()
{
	std::cout << "	Boek: dtor" << std::endl;
}

class_Boek::class_Boek(std::string str_Type) : str_BoekTitel(str_Type) {
	std::cout << "	Boek: ctor: " << str_Type << std::endl;
}
