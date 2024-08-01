#pragma once
#include "Player.h"
class Citizen :
    public Player
{
private:
    Player* guess;

public:
    Citizen();
    Citizen(std::string name, int score);

    Player* get_guess();
    void set_guess(Player& guess);
};

