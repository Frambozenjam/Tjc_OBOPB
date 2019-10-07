#pragma once
#include <string>

class class_Teacher: public class_Persoon {
public:
	class_Teacher();

	float float_Salary = 0.0;

	void function_SetSalary(float f);
	float function_GetSalary();
};

