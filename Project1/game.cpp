#include "game.h"
#include <iostream>
#include <string>

Game::Game()
{
	isRunning = true;
}

void Game::run()
{
	while (playAgain)
	{
		pickAttack();
		updateEnemy();
		render();
		pickDefense();
		updatePlayer();
		render();
	}
	std::cout << "Goodbye\n";
}

void Game::pickAttack()
{

}

void Game::pickDefense()
{

}

void Game::updateEnemy()
{

}

void Game::updatePlayer()
{

}

void Game::render()
{

}

bool Game::playAgain()
{
	std::string userInput;
	std::cout << "Do you want to play again?\n";
	getline(std::cin, userInput);
	for (int i = 0; i < userInput.size(); i++)
	{
		putchar(tolower(userInput[i]));
	}
	remove_if(userInput.begin(), userInput.end(), isspace);
	if (userInput == "yes")
	{
		return true;
	}
	else
	{
		return false;
	}
}