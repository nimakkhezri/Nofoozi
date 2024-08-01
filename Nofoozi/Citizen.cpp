#include "Citizen.h"

Citizen::Citizen() {
	this->guess = nullptr;
}

Citizen::Citizen(std::string name, int score = 0) {
	this->name = name;
	this->score = score;
	this->guess = nullptr;
}

// Setter functions

void Citizen::set_guess(Player& guess) {
	this->guess = &guess;
}

Player* Citizen::get_guess() {
	return guess;
}