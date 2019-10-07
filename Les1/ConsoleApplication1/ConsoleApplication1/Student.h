#pragma once
#include <string>

class class_Student: public class_Persoon {
public:
	class_Student();

	float float_Credits = 0.0;

	void function_SetCredits(float float_CreditsToSet);
	float function_GetCredits();
};

