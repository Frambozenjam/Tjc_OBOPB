#include <iostream>
#include <string>
#include "Persoon.h"
#include "Student.h"
#include "Teacher.h"

int main()
{
    std::cout << "Hello World!\n";

	//Persoon 1
	class_Persoon obj_Persoon = class_Persoon();
	obj_Persoon.function_SetAge(18);
	obj_Persoon.function_SetName("Hans");

	std::cout << "Persoon 1: ";
	std::cout << "Name: " << obj_Persoon.function_GetName() << " Age: " << obj_Persoon.function_GetAge() << std::endl;

	//Persoon 2
	class_Persoon obj_Persoon2 = class_Persoon();

	std::cout << "Persoon 2 (Zonder naam of age te zetten): ";
	std::cout << "Name: " << obj_Persoon2.function_GetName() << " Age: " << obj_Persoon2.function_GetAge() << std::endl;

	//Student 1
	class_Student obj_Student = class_Student();
	obj_Student.function_SetAge(19);
	obj_Student.function_SetName("Karel");
	obj_Student.function_SetCredits(43.5);

	std::cout << "Student 1: ";
	std::cout << "Name: " << obj_Student.function_GetName() << " Age: " << obj_Student.function_GetAge() << " Credits: " << obj_Student.function_GetCredits() << std::endl;

	//Teacher 1
	class_Teacher obj_Teacher = class_Teacher();
	obj_Teacher.function_SetAge(256);
	obj_Teacher.function_SetName("Heel oud");
	obj_Teacher.function_SetSalary(52.5);

	std::cout << "Teacher 1: ";
	std::cout << "Name: " << obj_Teacher.function_GetName() << " Age: " << obj_Teacher.function_GetAge() << " Salary: " << obj_Teacher.function_GetSalary() << std::endl;
}