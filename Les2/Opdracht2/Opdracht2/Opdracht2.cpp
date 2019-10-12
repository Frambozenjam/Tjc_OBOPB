#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>

//Files voor opdracht 1
#define file_Input_TextToFlip "file_Input_TextToFlip.txt"
#define file_Output_FlippedText "file_Output_FlippedText.txt"

//Files voor opdracht 2
#define file_Input_TextToCombine_1 "file_Input_TextToCombine_1.txt"
#define file_Input_TextToCombine_2 "file_Input_TextToCombine_2.txt"
#define file_Output_CombinedText "file_Output_CombinedText.txt"

//Counts number of characters in file
int i_CountCharactersInFile() {

	std::ifstream file;
	file.open(file_Input_TextToFlip);

	char ch;
	int i_Count = 0;

	file.get(ch);

	if (!file) {
		std::cout << "Er ging iets mis bij het openen van het INPUT bestand (Opdracht 1)" << std::endl;
		exit(1);
	}

	while (!file.fail()) {
		i_Count++;
		file.get(ch);
	}
	file.close();
	return i_Count;
}

//Returns character at position in file
char ch_GetCharacterAtPosition(int i_Position) {

	std::ifstream file;
	file.open(file_Input_TextToFlip);

	char ch;

	for (int i = 0; i < i_Position; i++)
	{
		file.get(ch);
	}
	file.close();
	return ch;
}

//Opdracht 1 flip text
void function_Opdracht1() {

	std::ofstream file;
	file.open(file_Output_FlippedText);

	if (!file) {
		std::cout << "Er ging iets mis bij het openen van het OUTPUT bestand (Opdracht 1)" << std::endl;
		exit(1);
	}

	int i_AantalCharacterInFile;
	i_AantalCharacterInFile = i_CountCharactersInFile();
		
	for (int i = i_AantalCharacterInFile; i > 0; i--)
	{
		char ch;
		ch = ch_GetCharacterAtPosition(i);
		file << ch;
	}

	file.close();

	std::cout << "Input text is geflipt opgeslagen in de output file. (Opdracht 1)" << std::endl;
}

//Counts number of lines in file
int i_CountLinesInFile(std::string str_File) {

	std::ifstream file;
	file.open(str_File);

	if (!file) {
		std::cout << "Er ging iets mis bij het openen van het INPUT bestand (Opdracht 2)" << std::endl;
		exit(1);
	}

	std::string str;
	int i_Count = 0;

	while (std::getline(file, str)) {
		i_Count++;
	}

	file.close();
	return i_Count;
}

//Returns string at line position
std::string str_GetStringAtPosition(std::string str_File, int i_Position) {

	std::ifstream file;
	file.open(str_File);

	if (!file) {
		std::cout << "Er ging iets mis bij het openen van het INPUT bestand (Opdracht 2)" << std::endl;
		exit(1);
	}

	std::string str;
	int i_Count = 0;

	while (std::getline(file, str))
	{
		if (i_Count == i_Position) {
			return str;
		}
		i_Count++;
	}

	file.close();
	return str;
}

//Opdracht 2 regels om en om schrijven
void function_Opdracht2() {

	std::ofstream file;
	file.open(file_Output_CombinedText);

	std::string str;
	bool b_Flip = false;
	int i_NumberOfLines;

	//Ervoor zorgen dat de functie stopt nadat de regels uit 1 van de input files op zijn
	if (i_CountLinesInFile(file_Input_TextToCombine_1) < i_CountLinesInFile(file_Input_TextToCombine_2))
		i_NumberOfLines = i_CountLinesInFile(file_Input_TextToCombine_1);
	else
		i_NumberOfLines = i_CountLinesInFile(file_Input_TextToCombine_2);

	for (int i = 0; i < i_NumberOfLines; i++)
	{
		if (!b_Flip)
			file << str_GetStringAtPosition(file_Input_TextToCombine_1, i) << std::endl;
		else
			file << str_GetStringAtPosition(file_Input_TextToCombine_2, i) << std::endl;
		b_Flip = !b_Flip;
	}

	std::cout << "De twee input teksten zijn om en om opgeslagen in de output file. (Opdracht 2)" << std::endl;
}

int main()
{
	//Voer opdracht 1 uit
	function_Opdracht1();

	//Voer opdracht 2 uit
	function_Opdracht2();

	return 0;
}