#include "Player.h"

Player::Player() {}

Player::Player(std::string name, int score = 0) {
	this->name = name;
	this->score = score;
}

// Setter functions

void Player::set_name(const std::string& name) {
	this->name = name;
}

void Player::set_score(const int& score) {
	this->score = score;
}

// Getter functions

std::string Player::get_name() const {
	return name;
}

int Player::get_score() const {
	return score;
}