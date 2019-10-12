#include "pch.h"
#include <iostream>
#include <string>
#include "class_Broodje.h"
#include "class_Broodmandje.h"

//void function_GeefMandjeDoor(class_Broodmandje* obj_Mandje) {
//	std::cout << "Mandje gekregen" << std::endl;
//	obj_Mandje->function_ToonBrood();
//	obj_Mandje->function_VoegToe("Croissant");
//	obj_Mandje->function_ToonBrood();
//}

int main()
{
    std::cout << "Hello World!\n"; 

	std::cout << "Mandje 1 maken" << std::endl;
	class_Broodmandje obj_Broodmandje_01 = class_Broodmandje();
	obj_Broodmandje_01.function_ToonBrood();

	std::cout << "--Mandje 1: " << std::endl;
	obj_Broodmandje_01.function_VoegToe("Krentebol");

	std::cout << "Mandje 2 maken" << std::endl;
	class_Broodmandje obj_Broodmandje_02 = obj_Broodmandje_01;
	obj_Broodmandje_02.function_ToonBrood();

	obj_Broodmandje_01.function_VoegToe("Croissant");

	std::cout << "--Mandje 1" << std::endl;
	obj_Broodmandje_01.function_ToonBrood();

	std::cout << "--Mandje 2" << std::endl;
	obj_Broodmandje_02.function_ToonBrood();
}