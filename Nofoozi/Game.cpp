#include "Game.h"

Game::Game(int numberOfPlayers) {
	this->numberOfPlayers = numberOfPlayers;
	board_gen();
	this->day = 1;
}

void Game::board_gen() {
	int score = 10 + ((numberOfPlayers - 3) * 20);
	while (score >= 10) {
		scoreBoard.push_back(score);
		score -= 20;
	}
}

void Game::start() {
	get_players();
}

void Game::get_players() {
	std::vector<Player> players;
	for (int i = 0; i < numberOfPlayers; i++) {
		std::string name;
		std::cout << "Please enter your name: ";
		std::cin >> name;

	}
}