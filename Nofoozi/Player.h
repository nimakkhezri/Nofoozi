#pragma once

#include <iostream>

class Player
{
protected:
	std::string name;
	int score;

public:
	Player();
	Player(std::string name, int score);

	void set_name(const std::string& name);
	void set_score(const int& score);

	std::string get_name() const;
	int get_score() const;
};

