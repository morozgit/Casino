//#include"Casino.h"
#include"Player.h"
#include"Slot_machine.h"
#include"Roulette.h"

int main()
{
	std::cout << "What sort of play do you want to play?" << std::endl;
	std::cout << "Roulette - press 1" << std::endl << "Slot machine - press 2" << std::endl;
	int number_of_game = 2;
	//std::cin >> number_of_game;
	std::cout << "How much money in your pocket?" << std::endl;
	float balanse = 1000;
	//std::cin >> balanse;
	//Player human(balanse);//constructor 
	std::cout << "Let`s start the game" << std::endl;
	std::cout << "Press . to continued game" << std::endl;
	std::cout << "Press another button for quit" << std::endl;
	std::cout << "Your bank equs " << balanse << std::endl;
	if (number_of_game == 2)
	{
		Slot_machine bandit(balanse);
		while (_getch() == 46)
		{
			bandit.Logic_game();
		}

	}
	


	
	return 0;
}
		