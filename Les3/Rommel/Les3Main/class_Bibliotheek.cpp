#include "pch.h"
#include <iostream>
#include <string>
#include "class_Bibliotheek.h"
#include "class_Boek.h"

class_Bibliotheek::class_Bibliotheek()
{

}

class_Bibliotheek::~class_Bibliotheek()
{
	std::cout << "Bibliotheek: dtor" << std::endl;
	delete pointer_Boek;
}

class_Bibliotheek::class_Bibliotheek(const class_Bibliotheek& deAndere) {
	std::cout << "Bibliotheek: copy-ctor" << std::endl;
	pointer_Boek = new class_Boek();
	pointer_Boek->str_BoekTitel = deAndere.pointer_Boek->str_BoekTitel;
}

void class_Bibliotheek::function_ToonBoek() {
	if (pointer_Boek)
	{
		std::cout << "Bibliotheek heeft  " << pointer_Boek->str_BoekTitel << std::endl;
	}
	else {
		std::cout << "Bibliotheek is leeg." << std::endl;
	}
}

void class_Bibliotheek::function_VoegToe(std::string str_Titel) {
	//if (pointer_Broodje) {
	//	std::cout << pointer_Broodje->s_Type << " vervangen met " << s_Type << std::endl;
	//}
	//std::cout << (pointer_Boek->s_Type << "Leeg mandje" << " vervangen met " << s_Type << std::endl;
	pointer_Boek = new class_Boek(str_Titel);
}
