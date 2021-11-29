#include <iostream>
#include "HangmanModel.cpp";
#include "HangmanController.cpp";
#include "HangmanView.cpp";

using namespace std;

int main()
{
	HangmanModel model;
	HangmanController controller;
	HangmanView view;
	char input;

	model.setMovie("batman");
	model.setInput("______");
	
	while (true)
	{
		input = controller.userEntry();
		controller.checkLetter(model.getMovie(), model.getInput(), input);
		model.setCheckedLetters(input);
		view.displayCurrentProgress(model.getInput());
		view.displayUsedLetters(model.getCheckedLetters());
	}
}