#include <iostream>
#include "Game.h"

int main() {
	int choice;
	do {
		std::cout << "\t\t\n-------------------- NOFOOZI --------------------" << std::endl;
		std::cout << "\t\t\n1. NEW GAME ..................... BAZI-E JADID .1" << std::endl;
		std::cout << "\t\t\n0. EXIT ................................. EXIT .0" << std::endl;
		std::cout << "\t\t\nChoose : ";
		std::cin >> choice;

		switch (choice)
		{
		case 1:
			int players;
			std::cout << "Players (5 .. 10) : ";
			std::cin >> players;
			Game game(players);
			game.start();
		}
	} while (choice != 0);
}