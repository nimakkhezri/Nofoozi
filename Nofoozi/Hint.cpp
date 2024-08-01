#include "Hint.h"

Hint::Hint() {}

Hint::Hint(std::string question, std::string type, std::string difficulty) {
	this->question = question;
	this->type = type;
	this->difficulty = difficulty;
}

// Setter functions

void Hint::set_question(const std::string& question) {
	this->question = question;
}

void Hint::set_answer(const std::string& answer) {
	this->answer = answer;
}

void Hint::set_type(const std::string& type) {
	this->type = type;
}

void Hint::set_difficulty(const std::string& difficulty) {
	this->difficulty = difficulty;
}

// Getter functions

std::string Hint::get_question() const {
	return question;
}

std::string Hint::get_answer() const {
	return answer;
}

std::string Hint::get_type() const {
	return type;
}

std::string Hint::get_difficulty() const {
	return difficulty;
}