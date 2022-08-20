#include"Player.h"
#include"Slot_machine.h"
#include"Roulette.h"
#include<thread>
	





	int main()
{
	
		std::string name;
	std::cout << "What is your name?" << std::endl;
	std::cin >> name;
	std::cout << "What sort of play do you want to play? " << name << std::endl;
	
		std::cout << "How match player will play? one or two" << std::endl;
	int number_of_player;
	std::cin >> number_of_player;

	std::string name1;
	std::cout << "What is your name?" << std::endl;
	std::cin >> name1;
	std::cout << "What sort of play do you want to play? " << name1 << std::endl;
	
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

	
		Player player1(name1, balanse);
	std::string name2;
	std::cout << "What is your name?" << std::endl;
	std::cin >> name2;
	std::cout << "What sort of play do you want to play? " << name2 << std::endl;
	//Player player2(name2, balanse);
	//std::thread pl2(std::ref(player2),std::ref(name2),std::ref(balanse));
	

		if (number_of_game == 1)
		{
			Roulette roulette;
			char non_stop = 'y';

			while (roulette.Do_you_want_to_contine(non_stop))
			{
				
					roulette.Logic_game(player);
				
					roulette.Logic_game(player1);
				
					std::cout << "Do you want to contine? y or n" << std::endl;
				std::cin >> non_stop;
				roulette.Cin_exeption(non_stop);
			}

		}


	if (number_of_game == 2)
	{
		
			std::cout << "Press . to continued game" << std::endl;
		std::cout << "Press another button for quit" << std::endl;
		

			std::cout << "Press . to continued game" << std::endl;
		std::cout << "Press another button for quit" << std::endl;


		
			Slot_machine bandit;

		while (_getch() == 46)
		{
			
				bandit.Logic_game(player);
			

				bandit.Logic_game(player1);
			
		}
	}

	return 0;
}
