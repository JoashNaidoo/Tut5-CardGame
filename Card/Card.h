#pragma once
#include <iostream>
#include <string>

using namespace std;

class Card	
{

private:
	int num; 
	string col; 

public:
	Card(int, string );
	
	string colour(); 
	int number(); 
	void print();
	
	~Card(); 
};
