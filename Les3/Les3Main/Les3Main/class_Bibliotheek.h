#pragma once
#include "pch.h"
#include <iostream>
#include <string>
#include "class_Bibliotheek.h"
#include "class_Boek.h"

class class_Bibliotheek
{
public:
	class_Bibliotheek();
	~class_Bibliotheek();
	class_Bibliotheek(const class_Bibliotheek& deAndere);

	void function_ToonBoek();
	void function_VoegToe(std::string str_Titel);

private:
	class_Boek* pointer_Boek = nullptr;
};

