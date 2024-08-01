#pragma once

#include <iostream>
#include <vector>
#include <string>
#include "Citizen.h"
#include "Imposter.h"
#include "Question.h"
#include "Hint.h"

class Game
{
private:
	std::vector<Citizen> citizens;
	Imposter imposter;
	int numberOfPlayers, day;
	std::vector<int> scoreBoard;
	std::vector<Question> roundQuestions;
	std::vector<Hint> roundHints;

public:
	Game(int numberOfPlayers);
	void start();
	void board_gen();
	void get_players();
};

