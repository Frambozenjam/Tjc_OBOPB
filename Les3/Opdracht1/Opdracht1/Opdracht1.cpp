#include "pch.h"
#include <iostream>
#include <string>
#include "class_Bibliotheek.h"
#include "class_Boek.h"

//void function_GeefMandjeDoor(class_Broodmandje* obj_Mandje) {
//	std::cout << "Mandje gekregen" << std::endl;
//	obj_Mandje->function_ToonBrood();
//	obj_Mandje->function_VoegToe("Croissant");
//	obj_Mandje->function_ToonBrood();
//}

int main()
{
	std::cout << "START \n" << std::endl;

	//Bibliotheek maken
	std::cout << "Bibliotheek maken." << std::endl;
	class_Bibliotheek obj_Bibliotheek = class_Bibliotheek();
	std::cout << std::endl;

	//Toon default boek
	obj_Bibliotheek.function_ToonBoek();

	//Boek toevoegen
	obj_Bibliotheek.function_VoegToe("Barry Pjotr en de slimme steen");

	//Toon nieuw boek
	obj_Bibliotheek.function_ToonBoek();

	//Boek uitlenen
	obj_Bibliotheek.function_LeenUit("Barry Pjotr en de slimme steen");

	//Proberen boek nog een keer uit te lenen
	obj_Bibliotheek.function_LeenUit("Barry Pjotr en de slimme steen");

	//Proberen boek te lenen die de bibliotheek niet heeft
	obj_Bibliotheek.function_LeenUit("De avonturen van pratende kat");

	//Proberen boek toe te voegen terwijl boek is uitgeleend
	obj_Bibliotheek.function_VoegToe("Informatie over grote vogels");

	//Proberen boek terug te brengen dat niet is uitgeleend
	obj_Bibliotheek.function_BrengTerug("Informatie over grote vogels");

	//Boek terugbrengen
	obj_Bibliotheek.function_BrengTerug("Barry Pjotr en de slimme steen");


	std::cout << "END \n" << std::endl;
}