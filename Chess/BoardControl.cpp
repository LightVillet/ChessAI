#pragma once
#include "Brain.cpp"
#include <vector>

using std::vector;

class BoardControl
{
private: 
	short board[8][8] = {	{ 7, 1, 0, 0, 0, 0, 2, 8 },	//White Pawn - 1						Black Pawn - 2								
							{ 3, 1, 0, 0, 0, 0, 2, 4 },	//White Knight - 3						Black Knight - 4
							{ 5, 1, 0, 0, 0, 0, 2, 6 },	//White Bishop - 5						Black Bishop - 6					
							{ 9, 1, 0, 0, 0, 0, 2, 10}, //White Rook - 7						Black Rook - 8						
							{ 11,1, 0, 0, 0, 0, 2, 12},	//White Queen - 9						Black Queen - 10
							{ 5, 1, 0, 0, 0, 0, 2, 6 }, //White King  - 11						Black King - 12				
							{ 3, 1, 0, 0, 0, 0, 2, 4 },
							{ 7, 1, 0, 0, 0, 0, 2, 8 } };
	Brain wBrain, bBrain;

public:
	BoardControl()
	{
	}

	void try_move(Move mv)
	{

	}

	int check()
	{
		int res = 0;
		return res;
	}

	int step()//one game move
	{
		int res = 0;
		//white's move
		Move mv = wBrain.get(board);
		try_move(mv);

		//check for winnings
		res = check();
		if (!res)
			return res;

		//black's move
		mv = bBrain.get(board);
		try_move(mv);

		//check for winnings
		res = check();
		if (!res)
			return res;

		return 0;
	}

	void draw()
	{
		for (int i = 0; i < 8; i++)
		{

		}
	}
};