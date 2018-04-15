#include <iostream>
#include "BoardControl.cpp"

using std::cout;
using std::cin;


int main() {
	BoardControl game;
	int t = 0;
	int n = 9814;  // capital A
	wchar_t c = static_cast<wchar_t>(n);
	std::wcout << c << std::endl;
	cin >> t;
	/* 
	 t: 0 - nothing
	 1 - white
	 2 - black
	 3 - draw
	*/
	/*
	while (!t)
	{
		t = game.step();
		game.draw();
	}*/

	return 0;
}