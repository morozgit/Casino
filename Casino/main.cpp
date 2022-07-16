#include"Player.h"
#include"Slot_machine.h"
#include"Roulette.h"





int main()
{
	std::string name;
	std::cout << "What is your name?" << std::endl;
	std::cin >> name;
	std::cout << "What sort of play do you want to play? " << name << std::endl;
	std::cout << "Roulette - press 1" << std::endl << "Slot machine - press 2" << std::endl;
	int number_of_game;
	std::cin >> number_of_game;
	std::cout << "How much money in your pocket?" << std::endl;
	float balanse;
	std::cin >> balanse;
	std::cout << "Let`s start the game" << std::endl;
	std::cout << "Your bank equs " << balanse << std::endl;

	// Player может быть создан тут 
	// передать его по параметру
	Player player(name, balanse);
	
	
	if (number_of_game == 1)
	{
		Roulette roulette;
		char non_stop = 'y';
		
		while (roulette.Do_you_want_to_contine(non_stop))
		{
			roulette.Logic_game(player);
			std::cout << "Do you want to contine? y or n" << std::endl;
			std::cin >> non_stop;
			roulette.Cin_exeption(non_stop);
		}
		
	}


	if (number_of_game == 2)
	{
		std::cout << "Press . to continued game" << std::endl;
		std::cout << "Press another button for quit" << std::endl;
		Slot_machine bandit;
		
		while (_getch() == 46)
		{
			bandit.Logic_game(player);
		}
	}
		
	return 0;
}
		