#include "Fraction.h"
#include <iostream>

#pragma once

using namespace std;

void Fraction::set_a(unsigned int value)
{
	first = value;
}

void Fraction::set_b(unsigned int value)
{
	second = value;
}
void Fraction::init(int x, int y)
{
	first = x;
	second = y;
	
}

void Fraction::display() const
{
	cout << first << "," << second << endl;

}

void Fraction::read()
{

	cout << "Zila chastuna = "; cin >> first;
	cout << "drobova chastuna= "; cin >> second;
	
}

void Fraction::Sub(Fraction x, Fraction y)
{
	cout << "Sub = " << x.first - y.first << "," << x.second - y.second << endl;
}

void Fraction::Porivn(Fraction x, Fraction y)
{
	if ((x.first - y.first) < 0) 
	{
		cout << "Nomer 1  < Nomer 2 " << endl;
	}
	else 
		if (x.first == y.first && x.second == y.second)
		{
			cout << "Nomer 1  = Nomer 2 " << endl;
		}
		else 
		{
		    cout << "Nomer 1  > Nomer 2 " << endl;
        }

	      

}

string  Fraction::toString() const
{
	stringstream sout;

	sout << "Zufra = " << first <<","<< second << endl;

	
	return sout.str();
}