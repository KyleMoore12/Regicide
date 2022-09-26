#pragma once

class Game
{
	private:
		bool isRunning;
	public:
		Game();
		void run();
		void pickAttack();
		void pickDefense();
		void updateEnemy();
		void updatePlayer();
		void render();
		bool playAgain();
};