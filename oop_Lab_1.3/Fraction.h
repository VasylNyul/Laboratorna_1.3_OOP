#include <iostream>
#include <string> 
#include <sstream>

#pragma once

using namespace std;

class Fraction
{
private:
    long first;
    unsigned short second;

public:
	int get_a() const { return first; };
	int get_b() const { return second; };
	void set_a(unsigned int value);
	void set_b(unsigned int value);

	void init(int x, int y);
	void read();
	void display() const;

	void Sub(Fraction x, Fraction y);
	void Porivn(Fraction x, Fraction y);

	string toString() const;
};

