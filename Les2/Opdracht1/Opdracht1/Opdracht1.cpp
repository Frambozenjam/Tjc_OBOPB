#include "pch.h"
#include <iostream>
#include "class_KoffieAutomaat.h"
#include "class_Munt.h"
#include "class_Munt_50Cent.h"
#include "class_Munt_1Euro.h"
#include "class_Munt_KoffieMunt.h"

int main()
{
    std::cout << "Hello World!\n";

	//Maak KoffieAutomaat
	class_KoffieAutomaat obj_KoffieAutomaat = class_KoffieAutomaat();

	//Maak munten
	class_Munt_50Cent obj_Munt_50Cent = class_Munt_50Cent();
	class_Munt_1Euro obj_Munt_1Euro = class_Munt_1Euro();
	class_Munt_KoffieMunt obj_Munt_KoffieMunt = class_Munt_KoffieMunt();

	//Werp in 50 cent munt
	obj_KoffieAutomaat.function_WerpInMunt(obj_Munt_50Cent);

	//Werp in 1 euro munt
	obj_KoffieAutomaat.function_WerpInMunt(obj_Munt_1Euro);

	//Werp in speciale koffiemunt
	obj_KoffieAutomaat.function_WerpInMunt(obj_Munt_KoffieMunt);
}