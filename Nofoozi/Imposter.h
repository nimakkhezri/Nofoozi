#pragma once
#include "Player.h"
class Imposter :
    public Player
{
private:
    Player* target;
public:
    Imposter();
    Imposter(std::string name, int score);

    void set_target(Player& target);
    Player* get_target();
};

