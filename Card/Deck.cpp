#include "Deck.h"
#include "Card.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

Card *ptrArr[20];		


Card cardArr[20] = { Card(1, "Red"), Card(2, "Red"), Card(3, "Red"), Card(4, "Red"), Card(5, "Red"), Card(6, "Red"), Card(7, "Red"), Card(8, "Red"), Card(9, "Red"), Card(10, "Red"), Card(1, "Black"), Card(2, "Black"), Card(3, "Black"), Card(4, "Black"), Card(5, "Black"), Card(6, "Black"), Card(7, "Black"), Card(8, "Black"), Card(9, "Black"), Card(10, "Black"), };

Deck::Deck()
{
	
	int i;
	for (i = 0; i < 20; i++)
	{
		ptrArr[i] = &cardArr[i];
	}
}

void Deck::reset()
{
	Deck();		
}

void Deck::shuffle()
{
	Card *tmpPtr;
	srand(time(NULL));

	if (total >= 2){


		int randA, randB;
		for (int i = 0; i < 50; i++){

			randA = rand() % total;
			randB = rand() % total;


		
			if (randA != randB) {

				tmpPtr = ptrArr[randA];		
				ptrArr[randA] = ptrArr[randB];
				ptrArr[randB] = tmpPtr;
			}
		}
	}
	else{
		cout << "Too little to shuffle" << endl;
	}

}

void Deck::peek()
{
	
}

int Deck::NumOfCards()
{
	int count = 0;
	for (int i = 0; i < 20; i++)
	{
		if (ptrArr[i] != NULL)	
		{
			count++;
		}
	}
	return count;
}

Deck::~Deck()
{

}