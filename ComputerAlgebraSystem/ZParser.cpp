#include "ZParser.h"

bool ZParser::_z() {
	bool isCorrect = true;
	if (str[pos] == '+' || str[pos] == '-')
		pos++;
	isCorrect = _num();
	if (str[pos] != '\0')
		isCorrect = false;
	return isCorrect;
}

bool ZParser::_num() {
	bool isCorrect = true;
	if (_first_digit())
		isCorrect = _other_digit();
	else
		isCorrect = false;
	return isCorrect;
}

bool ZParser::_first_digit() {
	bool isCorrect = true;
	if (str[pos] >= '1' && str[pos] <= '9')
		pos++;
	else
		isCorrect = false;
	return isCorrect;
}

bool ZParser::_other_digit() {
	bool isCorrect = true;
	if (_digit())
		_other_digit();
	return isCorrect;
}

bool ZParser::_digit() {
	bool isCorrect = true;
	if (str[pos] >= '0' && str[pos] <= '9')
		pos++;
	else
		isCorrect = false;
	return isCorrect;
}

