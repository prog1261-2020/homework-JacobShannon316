#pragma once
#include <fstream>
#include <string>
#include <vector>
class Question
{
public:
	Question(std::ifstream& inFile);
	std::vector<std::string> lines;
	void show_Question();
	int	 get_Answer();
private: 
	char	buffer[128];
	int		answer;
};

