#include "Card.h"
#include<iostream>

using namespace std;

Card::Card(int n, string c)
{
	num = n;
	col = c;
}

int Card::number()
{
	return num;
}

string Card::colour()
{
	return  col;
}

void Card::print()
{
	cout << col << " " << num << endl;
}

Card::~Card()
{

}