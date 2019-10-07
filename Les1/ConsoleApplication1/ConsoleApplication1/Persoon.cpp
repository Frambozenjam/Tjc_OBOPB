#include <iostream>
#include <string>
#include "Persoon.h"

//constructor
class_Persoon::class_Persoon() {

}

void class_Persoon::function_SetAge(int int_AgeToSet) {
	int_Age = int_AgeToSet;
}

void class_Persoon::function_SetName(std::string string_NameToSet) {
	string_Name = string_NameToSet;
}

int class_Persoon::function_GetAge() {
	return int_Age;
}

std::string class_Persoon::function_GetName() {
	return string_Name;
}