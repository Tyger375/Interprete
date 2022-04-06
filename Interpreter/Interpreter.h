#pragma once
//#include "Utilities.h"
#include "../Variable/Variable.h"
#include <iostream>
#include <vector>
#include <string>
#include "../Function/Function.h"
#include "../While/While.h"

class Interpreter
{
private:
	int i;
	std::vector<std::string> typeVariables;
	std::vector<Variable> variables;
	std::vector<Function> functions;
    std::vector<While> whiles;
	std::vector<bool> Ifs;
	std::vector<std::vector<Variable>> VariablesInfos;
	bool FindindStaple;
	bool writingFunc;
    bool writingWhile;

    bool isExecutingFunc;

	void Setup();
public:
	Interpreter();
	Interpreter(vector<Variable>, bool);
	void start(std::string);
	void Line(std::string line);
	void debugVariables();
	void debugFunctions();

    inline vector<Variable> getVariables() { return this->variables; };

	Variable find_variable(std::string);
	Variable* find_variable_pointer(std::string);
	Function find_function(std::string);
	//void addizione();
	void loadVariable(std::vector<std::string>, std::string);
	void loadIntVariable(std::vector<std::string>, std::string);
	void loadStringVariable(std::vector<std::string>, std::string);
	void printString(std::string);
	void Add(std::vector<std::string>, std::string*, std::string*, std::string);
	void AddIntegers(std::vector<std::string>, std::string*, std::string*);
	void AddStrings(std::vector<std::string>, std::string*, std::string*);
	void print(std::vector<std::string>);
	void If(const std::string, const std::string, const std::string);
	//for (i=0;i>0;i++)
	void ForLoop(const std::vector<std::string>, const std::vector<std::string>, const std::vector<std::string>);
	void WhileLoop(const std::vector<std::string>);
	void FindGraffa(std::vector<std::string>);
};