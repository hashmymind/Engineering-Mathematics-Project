#pragma once

#include <string>
#include <vector>
#include <fstream>
#include "Matrix.h"


using std::string;
using std::vector;

/*
only two variables x y
*/

const NumType calcDlt = 1e-9;

struct Nomial
{
	NumType powX;
	NumType powY;
	NumType coef;
};

class Equation
{
private:
	vector<Nomial> polynomial_;
	string str;
	int dim_;

public:
	Equation() {};
	Equation(string);
	int getDim();
	static NumType calcEquation(Equation, Vector);
	Equation PartialDerivative(char respectTo);

	Equation operator=(const Equation& rhs);
	Equation operator=(const string& rhs);

	vector<Equation> directionalDerivatives;

	vector<Equation> secondPartialDerivatives;
	string ToString() const;
};

extern vector<Equation> equations;

vector<string> loadEquations(string);


