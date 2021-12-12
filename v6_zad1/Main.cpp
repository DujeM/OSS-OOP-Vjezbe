#include <iostream>
#include "HangmanModel.h";
#include "HangmanController.h";
#include "HangmanView.h";

using namespace std;

int main()
{
	HangmanModel model;
	HangmanController controller;
	HangmanView view;
	char input;
	bool found;

	model.getMovie();
	model.setInput(model.getMovie());
	
	while (model.getLives() != 0 && !model.getProgress())
	{
		input = controller.userEntry();

		found = controller.checkLetter(model.getMovie(), model.getInput(), input);
		model.setCheckedLetters(input);

		if (found)
		{
			model.setLives();
		}

		view.displayCurrentProgress(model.getInput());
		view.displayUsedLetters(model.getCheckedLetters());
		view.displayHangman(model.getLives());

		model.setProgress(controller.checkIfGameIsOver(model.getLives()));
	}

	cout << "Game over";
}