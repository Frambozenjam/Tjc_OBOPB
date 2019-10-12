#pragma once
#include "class_Munt.h"
#include "class_Munt_50Cent.h"
#include "class_Munt_1Euro.h"
#include "class_Munt_KoffieMunt.h"

class class_KoffieAutomaat
{
public:
	class_KoffieAutomaat();
	~class_KoffieAutomaat();

	void function_WerpInMunt(class_Munt_50Cent i);
	void function_WerpInMunt(class_Munt_1Euro i);
	void function_WerpInMunt(class_Munt_KoffieMunt i);
};

