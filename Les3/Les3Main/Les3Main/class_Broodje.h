#pragma once
#include <string>

class class_Broodje
{
public:
	class_Broodje();
	~class_Broodje();

	class_Broodje(std::string s_Type);

	std::string s_Type = "(onbekend)";
};

