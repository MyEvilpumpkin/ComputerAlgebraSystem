#pragma once
#include <string>
#include <algorithm>
#include "Parser.h"

class PParser : public Parser {
	void RemoveChar(char ch) override { str.erase(remove(str.begin(), str.end(), ch), str.end()); }
	void Parse() override { RemoveChar(' ');  status = _polyn(); if (str.length() == 1 && str[0] == '0') status = true; }
	bool _polyn();
	bool _first_part();
	bool _sign_or_nothing();
	bool _sign();
	bool _coef();
	bool _num();
	bool _first_digit();
	bool _other_digit();
	bool _digit();
	bool _mul();
	bool _x();
	bool _power();
	bool _other_part();
public:
	PParser(std::string str) : Parser(str) { Parse(); }
	void Update(std::string str) override { this->str = str; pos = 0; status = false; Parse(); }
	bool GetStatus() override { return status; }
	std::string GetPreparedString() override { RemoveChar('*'); RemoveChar('^'); RemoveChar('('); RemoveChar(')'); if (str[0] != '-' && str[0] != '+') str = '+' + str; return str; }
};

