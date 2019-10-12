#include "NParser.h"

bool NParser::_n() {
	bool isCorrect = true;
	isCorrect = _num();
	if (str[pos] != '\0')
		isCorrect = false;
	return isCorrect;
}

bool NParser::_num() {
	bool isCorrect = true;
	if (_first_digit())
		isCorrect = _other_digit();
	else
		isCorrect = false;
	return isCorrect;
}

bool NParser::_first_digit() {
	bool isCorrect = true;
	if (str[pos] >= '1' && str[pos] <= '9')
		pos++;
	else
		isCorrect = false;
	return isCorrect;
}

bool NParser::_other_digit() {
	bool isCorrect = true;
	if (_digit())
		_other_digit();
	return isCorrect;
}

bool NParser::_digit() {
	bool isCorrect = true;
	if (str[pos] >= '0' && str[pos] <= '9')
		pos++;
	else
		isCorrect = false;
	return isCorrect;
}

