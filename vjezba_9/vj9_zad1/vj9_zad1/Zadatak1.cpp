#include <iostream>
#include "Game.h";

using namespace std;


int main() {
	Game game;

	game.addAHumanPlayer();
	game.addAHumanPlayer();
	game.addAComputerPlayer();
	game.addAComputerPlayer();

	while (game.GetGameProgress())
	{
		game.playersSetCoins();
		game.guessTheNumber();
	}
}