#pragma once
#include <string>
class class_Broodmandje
{
public:
	class_Broodmandje();
	~class_Broodmandje();
	class_Broodmandje(const class_Broodmandje& deAndere);

	void function_ToonBrood();
	void function_VoegToe(std::string s_Type);

private:
	class_Broodje* pointer_Broodje = nullptr;
};

