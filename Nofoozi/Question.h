#pragma once

#include <iostream>
#include <vector>

class Question
{
private:
	std::string question, category, difficulty, correct_answer;
	std::vector<std::string> incorrect_answers;

public:
	Question();
	Question(std::string question, std::string category, std::string difficulty, std::string correct_answer, std::vector<std::string> incorrect_answers);

	void set_question(const std::string& question);
	void set_category(const std::string& category);
	void set_difficulty(const std::string& difficulty);
	void set_correct_answer(const std::string& correct_answer);
	void set_incorrect_answers(const std::vector<std::string>& incorrect_answers);

	std::string get_question() const;
	std::string get_category() const;
	std::string get_difficulty() const;
	std::string get_correct_answer() const;
	std::vector<std::string> get_incorrect_answers() const;
};

