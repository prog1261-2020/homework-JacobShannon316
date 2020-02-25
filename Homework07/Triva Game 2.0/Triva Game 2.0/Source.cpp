#include <fstream>
#include <iostream>
#include <memory>
#include "Question.h"
int get_Number() 
{
	int a;
	std::cin >> a;
	while (std::cin.fail() || a <= -1) {
		std::cin.clear();
		std::cin.ignore(32767, '\n');
		std::cout << "Please enter a valid number: ";
		std::cin >> a;
	}
	return a;
}
int main()
{
	int input;
	int number = 0;
	std::ifstream inFile;
	std::vector<Question> question;
	inFile.open("inFile.txt", std::ios::binary);
	if (inFile.fail())
	{
		std::cerr << "file not opened\n";
		exit(1);
	}
	while (!inFile.eof())
	{
		++number;
		Question temp(inFile);
		question.push_back(temp);
	} 
	for (int i{ 0 }; i < question.size(); ++i)
	{
		question[i].show_Question();
		std::cout << "What is your answer: ";
		input = get_Number();
		if (input == question[i].get_Answer())
		{
			std::cout << "thats Right!" << std::endl;
		}
		else
		{
			std::cout << "that was not right" << std::endl;
		}
		system("pause");
		system("cls");
	}
}