#include <iostream>
#include "BoardControl.cpp"
#include "Drawer.cpp"

using std::cout;
using std::cin;


int main() {
	short a = 0, b = 0;
		BoardControl game;
		Drawer drawer;
	/*while ((a>=0) && (a<=77) && (a % 10 <= 7))  {
		cout << "\n";
		cin >> a;
		for (short i = 0; i < game.legalMoves(a).size(); i++)
		{
			if (game.legalMoves(a)[i] / 10 == 0)
				cout << "0";
			cout << game.legalMoves(a)[i] << " ";
		}
	}
	*/
	while (((a >= 0) && (a <= 77) && (a % 10 <= 7)) && (b >= 0) && (b <= 77) && (b % 10 <= 7)) {

		cin >> a >> b;
		if (((a >= 0) && (a <= 77) && (a % 10 <= 7)) && (b >= 0) && (b <= 77) && (b % 10 <= 7))
			game.move(a, b);
		drawer.drawBoard(game);
	}
	return 0;
}