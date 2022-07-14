#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>

void attempts(std::vector<int> list) 
{
	std::cout << std::endl;
	std::cout << "Here is the history of your attempts for this game!\n";

	for (int i = 0; i < list.size(); i++)
	{
		std::cout << list[i] << std::endl;
	}
	std::cout << "It took you " << list.size() << " attempts to get the right answer.\n";
}


void playGame()
{
	std::vector<int> guesses;

	srand( (unsigned int) time(NULL) );
	int randomNumber = rand() % 11;

	std::cout << "-- GUESSING THE NUMBER --" << std::endl << "A random number between 0 and 10 is generated, guess it!" << std::endl;

	int guess = 20;

	while (guess != randomNumber)
	{
		std::cin >> guess;
		guesses.push_back(guess);

		if (guess == randomNumber)
		{
			std::cout << "--> Congratulations! You win :)\n\n";
			attempts(guesses);
		}
		else if (guess < randomNumber)
		{
			std::cout << "--> Too low!";
		}
		else
		{
		    std::cout << "--> Too high!";
		}
	}
}


int main()
{
	int choice;

	do
	{
		std::cout << "Welcome!\n1. Play Game\n2. Quit\n";
		std::cin >> choice;

		switch (choice)
		{
		case 1:
			std::cout << "Let's play!\n\n";
			playGame();
			break;
		case 2:
			std::cout << "Sad to see you go..";
			break;
		}
	} 
	while (choice != 2);
}


 