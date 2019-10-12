#pragma once
#include <string>
#include <algorithm>
#include "Parser.h"

class ZParser : public Parser {
	void RemoveChar(char ch) override { str.erase(remove(str.begin(), str.end(), ch), str.end()); }
	void Parse() override { RemoveChar(' ');  status = _z(); if (str.length() == 1 && str[0] == '0') status = true; }
	bool _z();
	bool _num();
	bool _first_digit();
	bool _other_digit();
	bool _digit();
public:
	ZParser(std::string str) : Parser(str) { Parse(); }
	void Update(std::string str) override { this->str = str; pos = 0; status = false; Parse(); }
	bool GetStatus() override { return status; }
	std::string GetPreparedString() override { if (str[0] != '-' && str[0] != '+') str = '+' + str; return str; }
};

