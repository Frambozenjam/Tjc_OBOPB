#include <iostream>
#include <string>
#include "Persoon.h"
#include "Student.h"

//constructor
class_Student::class_Student() {

}

void class_Student::function_SetCredits(float float_CreditsToSet) {
	float_Credits = float_CreditsToSet;
}

float class_Student::function_GetCredits() {
	return float_Credits;
}