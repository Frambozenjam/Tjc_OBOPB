#pragma once
#include "pch.h"
#include <iostream>
#include <string>
#include "class_Bibliotheek.h"
#include "class_Boek.h"

class class_Boek
{
public:
	class_Boek();
	~class_Boek();

	class_Boek(std::string s_Type);

	std::string str_BoekTitel = "Onbekend";
	bool b_Uitgeleend = false;
};

