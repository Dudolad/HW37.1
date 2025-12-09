#pragma once
#include <iostream>
#include <string>
using namespace std;

class Ingredient
{
	string name;
	float time;
public:
	Ingredient() : name("undefined"), time(0) {}

	Ingredient(string n, float t) {}

	string getName() const {
		return name;
	}

	float getTime() const {
		return time;
	}

	bool operator<(const Ingredient& other) const {
		return time > other.time;
	}

};