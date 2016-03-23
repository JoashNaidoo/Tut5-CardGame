#pragma once
#include"Card.h"
#include <iostream>


class Deck
{
private:
	int total = 20;

public:
	Deck();

	~Deck();

	void reset();
	void shuffle();
	void peek();
	int NumOfCards();
};
