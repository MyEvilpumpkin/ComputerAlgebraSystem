#pragma once
#include <string>

class Parser {
protected:
	std::string str;
	int pos;
	bool status;
	virtual void RemoveChar(char) = 0;
	virtual void Parse() = 0;
public:
	Parser(std::string str) : str(str), pos(0), status(false) { }
	virtual void Update(std::string str) = 0;
	virtual bool GetStatus() = 0;
	virtual std::string GetPreparedString() = 0;
};

