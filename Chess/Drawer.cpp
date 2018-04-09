#pragma once
#include <iostream>
#include "BoardControl.cpp"


using std::cout;



class Drawer {
private: 
	char piece;

public:
	void drawBoard(BoardControl board) {
		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < 8; j++) {
				switch (board.getBoard(i, j))
				{
				case 0: { piece = '-'; break; }
				case 1: { piece = 'P'; break; }
				case 2: { piece = 'p'; break; }
				case 3: { piece = 'N'; break; }
				case 4: { piece = 'n'; break; }
				case 5: { piece = 'B'; break; }
				case 6: { piece = 'b'; break; }
				case 7: { piece = 'R'; break; }
				case 8: { piece = 'r'; break; }
				case 9: { piece = 'Q'; break; }
				case 10: { piece = 'q'; break; }
				case 11: { piece = 'K'; break; }
				case 12: { piece = 'k'; break; }
				}
				cout << "|" << piece;
			}
			cout << "|\n";
		}
	}

};