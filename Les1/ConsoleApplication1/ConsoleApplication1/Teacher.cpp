#include <iostream>
#include <string>
#include "Persoon.h"
#include "Teacher.h"

class_Teacher::class_Teacher() {

}

void class_Teacher::function_SetSalary(float f) {
	float_Salary = f;
}

float class_Teacher::function_GetSalary() {
	return float_Salary;
}