#include "pch.h"
#include <iostream>
#include <string>
#include "class_Bibliotheek.h"
#include "class_Boek.h"

class_Bibliotheek::class_Bibliotheek()
{
	std::cout << "	Bibliotheek: ctor" << std::endl;
}

class_Bibliotheek::~class_Bibliotheek()
{
	std::cout << "	Bibliotheek: dtor" << std::endl;
	delete pointer_Boek;
}

void class_Bibliotheek::function_ToonBoek() {
	std::cout << "Toon boek in bibliotheek." << std::endl;
	if (pointer_Boek)
	{
		if (!pointer_Boek->b_Uitgeleend)
			std::cout << "	Bibliotheek heeft: " << pointer_Boek->str_BoekTitel << "\n" << std::endl;
		else
			std::cout << "	Bibliotheek had: " << pointer_Boek->str_BoekTitel << " maar deze is uitgeleend. \n" << std::endl;
	}
	else {
		std::cout << "	Bibliotheek is leeg. \n" << std::endl;
	}
}

void class_Bibliotheek::function_VoegToe(std::string str_Titel) {
	std::cout << "Voeg boek toe." << std::endl;
	if (pointer_Boek)
	{
		if (!pointer_Boek->b_Uitgeleend)
		{
			std::cout << "	Boek: " << pointer_Boek->str_BoekTitel << " vervangen met: " << str_Titel << std::endl;
			delete pointer_Boek;
			pointer_Boek = new class_Boek(str_Titel);
		}
		else
		{
			std::cout << "	Kan boek niet vervangen terwijl deze is uitgeleend. \n" << std::endl;
		}
	}
	else
	{
		pointer_Boek = new class_Boek(str_Titel);
		std::cout << "	Boek toegevoegd. \n" << std::endl;
	}
}

void class_Bibliotheek::function_LeenUit(std::string str_Titel) {
	std::cout << "Leen boek uit." << std::endl;
	if (pointer_Boek) {
		if (pointer_Boek->str_BoekTitel == str_Titel)
		{
			if (!pointer_Boek->b_Uitgeleend)
			{
				pointer_Boek->b_Uitgeleend = true;
				std::cout << "	" << pointer_Boek->str_BoekTitel << " uitgeleend. \n" << std::endl;
			}
			else
			{
				std::cout << "	Kan " << str_Titel << " niet uitlenen, dit boek is al uitgeleend. \n" << std::endl;
			}
		}
		else
		{
			std::cout << "	Kan " << str_Titel << " niet uitlenen, bibliotheek heeft deze niet. \n" << std::endl;
		}
	}
	else
	{
		std::cout << "	Kan niet uitlenen, Bibliotheek is leeg. \n" << std::endl;
	}
}

void class_Bibliotheek::function_BrengTerug(std::string str_Titel) {
	std::cout << "Breng boek terug." << std::endl;
	if (pointer_Boek) {
		if (pointer_Boek->str_BoekTitel == str_Titel)
		{
			pointer_Boek->b_Uitgeleend = false;
			std::cout << "	" << pointer_Boek->str_BoekTitel << " teruggebracht. \n" << std::endl;
		}
		else
		{
			std::cout << "	Kan " << str_Titel << " niet terugbrengen, dit boek hoort niet bij deze bibliotheek. \n" << std::endl;
		}
	}
	else
	{
		std::cout << "	Kan " << str_Titel << " niet terugbrengen, dit boek hoort niet bij deze bibliotheek. \n" << std::endl;
	}
}