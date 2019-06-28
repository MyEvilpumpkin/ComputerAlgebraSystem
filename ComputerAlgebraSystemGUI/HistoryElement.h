#pragma once
#include <string>
#include <vector>

class HistoryElement {
public:
	std::string module;
	std::string firstOperand;
	std::string secondOperand;
	std::string result;
	HistoryElement(std::string module, std::string firstOperand, std::string secondOperand, std::string result) : module(module), firstOperand(firstOperand), secondOperand(secondOperand), result(result) { }
};

typedef std::vector<HistoryElement> History;

