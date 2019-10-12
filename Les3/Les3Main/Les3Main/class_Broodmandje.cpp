#include "pch.h"
#include <iostream>
#include <string>
#include "class_Broodje.h"
#include "class_Broodmandje.h"

class_Broodmandje::class_Broodmandje()
{
}

class_Broodmandje::~class_Broodmandje()
{
	std::cout << "Broodmandje: dtor" << std::endl;
	delete pointer_Broodje;
}

class_Broodmandje::class_Broodmandje(const class_Broodmandje& deAndere) {
	std::cout << "Broodmandje: copy-ctor" << std::endl;
	pointer_Broodje = new class_Broodje();
	pointer_Broodje->s_Type = deAndere.pointer_Broodje->s_Type;
}

void class_Broodmandje::function_ToonBrood() {
	if (pointer_Broodje)
	{
		std::cout << "Broodmandje bevat " << pointer_Broodje->s_Type << std::endl;
	}
	else {
		std::cout << "Broodmandje is leeg." << std::endl;
	}
}

void class_Broodmandje::function_VoegToe(std::string s_Type) {
	//if (pointer_Broodje) {
	//	std::cout << pointer_Broodje->s_Type << " vervangen met " << s_Type << std::endl;
	//}
	std::cout << (pointer_Broodje ?pointer_Broodje->s_Type:"Leeg mandje") << " vervangen met " << s_Type << std::endl;
	pointer_Broodje = new class_Broodje(s_Type);
}
