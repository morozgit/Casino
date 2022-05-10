//#include"Casino.h"
#include"Player.h"
#include"Slot_machine.h"

int main()
{
	std::cout << "What sort of play do you want to play?" << std::endl;
	std::cout << "Roulette - press 1" << std::endl << "Slot machine - press 2" << std::endl;
	int number_of_game;
	std::cin >> number_of_game;
	std::cout << "How much money in your pocket?" << std::endl;
	float balanse;
	std::cin >> balanse;
	Player human(balanse);//constructor 
	if (number_of_game == 1)
	{
		
	}
	Slot_machine bandit;
	
	
	std::cout << "Let`s start the game" << std::endl;
	std::cout << "Press . for continued game" << std::endl;
	std::cout << "Press another button for quit" << std::endl;
	std::cout << "Your bank equs " << balanse << std::endl;
	while (human.Get_balanse() != 0)
	{
		bandit.Logic_game();
	}

	return 0;
}