#pragma once
//#include "Utilities.h"
#include "Variable.h"
#include <iostream>
#include <vector>
#include <string>
#include "Function.h"

class Interprete
{
private:
	int i;
	std::vector<std::string> tipiVariabili;
	std::vector<Variable> variabili;
	std::vector<Function> funzioni;
	std::vector<bool> Ifs;
	bool FindindGraffa;
public:
	Interprete();
	void start(std::string);
	void Linea(std::string linea);
	void debugVariables();
	void debugFunctions();
	Variable find_variable(std::string);
	Function find_function(std::string);
	//void addizione();
	void loadIntVariable(std::vector<std::string>, std::string);
	void loadStringVariable(std::vector<std::string>, std::string);
	void printString(std::string);
	void AddInteri(std::vector<std::string>, std::string*, std::string*);
	void AddStringhe(std::vector<std::string>, std::string*, std::string*);
	void print(std::vector<std::string>);
	void If(const std::string, const std::string, const std::string);
	void FindGraffa(std::vector<std::string>);
};