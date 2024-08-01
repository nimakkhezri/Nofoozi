#pragma once

#include <iostream>

class Hint
{
private:
	std::string question, answer, type, difficulty;

public:
	Hint();
	Hint(std::string question, std::string type, std::string difficulty);

	void set_question(const std::string& question);
	void set_answer(const std::string& answer);
	void set_type(const std::string& type);
	void set_difficulty(const std::string& difficulty);

	std::string get_question() const;
	std::string get_answer() const;
	std::string get_type() const;
	std::string get_difficulty() const;
};

