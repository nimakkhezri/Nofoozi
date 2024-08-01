#include "Imposter.h"

Imposter::Imposter() {
	this->target = nullptr;
}

Imposter::Imposter(std::string name, int score) {
	this->target = nullptr;
}

// Setter functions

void Imposter::set_target(Player& target) {
	this->target = &target;
}

// Getter functions

Player* Imposter::get_target() {
	return target;
}