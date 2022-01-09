#include <iostream>
#include "Game.h";

using namespace std;


int main() {
	Game game;

	game.addAPlayer();
	game.addAPlayer();
	game.addAPlayer();
	game.addAPlayer();

	while (game.GetGameProgress())
	{
		game.playersSetCoins();
		game.guessTheNumber();
	}
}