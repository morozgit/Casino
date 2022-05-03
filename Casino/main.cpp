#include<iostream>
#include <conio.h>
#include"Player.h"
#include"One_arm_bandit.h"

int main()
{
	Player human;
	One_arm_bandit bandit;
	std::cout << "Let`s start the game" << std::endl;
	std::cout << "Press . for continued game" << std::endl;
	std::cout << "Press another button for quit" << std::endl;
	std::cout << "Your bank equs 100" << std::endl;
	while (human.get_balanse() != 0)
	{
		if (_kbhit()) // слушатель нажатия на клаву
		{
			if (_getch() == 46) // ждёт нажатия . на клаву без Enter после этого
			{
				bandit.create_number();
				bandit.print_res();
				if (bandit.check_resalt())
				{
					if (bandit.check_resalt() && bandit.flag)
					{
						std::cout << "JackPot!!! You are lucky" << std::endl;
						human.set_balanse(human.get_balanse()+1000);
					}
					human.plus_money();
				}
				else
				{
					human.minus_money();
				}
			}
			else
			{
				std::cout << "Game over" << " " << "You win" << " " << human.get_balanse() << std::endl;
				break;
			}
			std::cout << "Your bank is " << human.get_balanse() << std::endl;
		}
	}

	return 0;
}