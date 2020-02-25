#include "Question.h"
#include <iostream>
#include <cctype>

Question::Question(std::ifstream& inFile)
{
	do 
	{
		std::string tmp;
		inFile.getline(buffer, 128);
		tmp = buffer;
		lines.push_back(tmp);
	} while (!isdigit(buffer[0]));
	answer = buffer[0];
}

void Question::show_Question()
{
	for (int i{ 0 }; i < lines.size()-1; ++i)
	{
		std::cout << lines[i] << std::endl;
	}
}

int Question::get_Answer()
{
	return answer-48;
}
