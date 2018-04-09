#pragma once
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


public:


	vector<short> legalMoves(short piece) {
		short x = piece / 10;
		short y = piece % 10;
		vector<short> legal_moves;
		if (board[x][y] == 1) {															//White pawn
			if (x != 7)
				if ((board[x + 1][y + 1] != 0) && (board[x + 1][y + 1] % 2 == 0))
					legal_moves.push_back(x*10 + y + 11);
			if (x != 0)
				if ((board[x - 1][y + 1] != 0) && (board[x - 1][y + 1] % 2 == 0))
					legal_moves.push_back(x*10 + y - 9);




			if (board[x][y + 1] == 0)
				legal_moves.push_back(x*10 + y + 1);

			if (y == 1)
				if ((board[x][y + 1] == 0) && (board[x][y + 2] == 0))
					legal_moves.push_back(x*10 + y + 2);

		}																				//White pawn


		if (board[x][y] == 2) {															//Black pawn
			if (x != 7)
				if ((board[x + 1][y - 1] != 0) && (board[x + 1][y - 1] % 2 == 1))
					legal_moves.push_back(x * 10 + y + 9);
			if (x != 0)
				if ((board[x - 1][y - 1] != 0) && (board[x - 1][y - 1] % 2 == 1))
					legal_moves.push_back(x * 10 + y - 11);




			if (board[x][y - 1] == 0)
				legal_moves.push_back(x * 10 + y - 1);

			if (y == 6)
				if ((board[x][y - 1] == 0) && (board[x][y - 2] == 0))
						legal_moves.push_back(x * 10 + y - 2);

		}																				//Black pawn


		if ((board[x][y] == 3) || (board[x][y] == 4)) {									//Knights

			if (y >= 2) {
				if (x >= 1)
					if ((board[x - 1][y - 2] == 0) || ((board[x][y] + board[x - 1][y - 2]) % 2 == 1))
						legal_moves.push_back(x * 10 + y - 12);
				if (x <= 6)	
					if ((board[x + 1][y - 2] == 0) || ((board[x][y] + board[x + 1][y - 2]) % 2 == 1))
						legal_moves.push_back(x * 10 + y + 8);
			}

			if (y <= 5) {
				if (x >= 1)
					if ((board[x - 1][y + 2] == 0) || ((board[x][y] + board[x - 1][y + 2]) % 2 == 1))
						legal_moves.push_back(x * 10 + y - 8);
				if (x <= 6)
					if ((board[x + 1][y + 2] == 0) || ((board[x][y] + board[x + 1][y + 2]) % 2 == 1))
						legal_moves.push_back(x * 10 + y + 12);
			}
			
			if (x >= 2) {
				if (y >= 1)
					if ((board[x - 2][y - 1] == 0) || ((board[x][y] + board[x - 2][y - 1]) % 2 == 1))
						legal_moves.push_back(x * 10 + y - 21);
				if (y <= 6)
					if ((board[x - 2][y + 1] == 0) || ((board[x][y] + board[x - 2][y + 1]) % 2 == 1))
						legal_moves.push_back(x * 10 + y - 19);
			}

			if (x <= 5) {
				if (y >= 1)
					if ((board[x + 2][y - 1] == 0) || ((board[x][y] + board[x + 2][y - 1]) % 2 == 1))
						legal_moves.push_back(x * 10 + y + 19);
				if (y <= 6)
					if ((board[x + 2][y + 1] == 0) || ((board[x][y] + board[x + 2][y + 1]) % 2 == 1))
						legal_moves.push_back(x * 10 + y + 21);							//Knights
			}

		}

		return legal_moves;

	}






	void move(short a, short b) {
		board[b / 10][b % 10] = board[a / 10][a % 10];
		board[a / 10][a % 10] = 0;
	}


};