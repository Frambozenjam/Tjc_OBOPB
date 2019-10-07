#pragma once
#include <string>

class class_Persoon {
public:
	int int_Age = 0;
	std::string string_Name = "No Name";

	class_Persoon();

	void function_SetAge(int int_AgeToSet);
	void function_SetName(std::string string_NameToSet);

	int function_GetAge();
	std::string function_GetName();
};