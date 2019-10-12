#include "pch.h"
#include "class_KoffieAutomaat.h"
#include "class_Munt.h"
#include "class_Munt_50Cent.h"
#include "class_Munt_1Euro.h"
#include "class_Munt_KoffieMunt.h"
#include <iostream>


class_KoffieAutomaat::class_KoffieAutomaat()
{
}


class_KoffieAutomaat::~class_KoffieAutomaat()
{
}

void class_KoffieAutomaat::function_WerpInMunt(class_Munt_50Cent i) {
	std::cout << "Je hebt een 50 eurocent munt ingeworpen.\n" << "Je kunt kopen: RommelKoffie" << std::endl;
}
void class_KoffieAutomaat::function_WerpInMunt(class_Munt_1Euro i) {
	std::cout << "Je hebt een euro munt ingeworpen.\n" << "Je kunt kopen: RommelKoffie, NormaleKoffie" << std::endl;
}
void class_KoffieAutomaat::function_WerpInMunt(class_Munt_KoffieMunt i) {
	std::cout << "Je hebt een speciale koffiemunt ingeworpen.\n" << "Je kunt kopen: RommelKoffie, NormaleKoffie, LuxeKoffie" << std::endl;
}