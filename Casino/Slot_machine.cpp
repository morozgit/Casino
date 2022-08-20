#include"Slot_machine.h"

Slot_machine::Slot_machine()
{
	number1 = 0;
	number2 = 0;
	number3 = 0;
}


void Slot_machine::create_number()
{
	number1 = rand() % 10;
	number2 = rand() % 10;
	number3 = rand() % 10;
	std::cout << number1 << " " << number2 << " " << number3 << std::endl;
}

bool Slot_machine::Check_result()
{
	jack_pot_flag = false;
	if (number1 == number2 || number1 == number3 || number2 == number3)
	{
		if (number1 == number2 && number2 == number3)
		{
			jack_pot_flag = true;

			return jack_pot_flag;
		}
		return true;
		jack_pot_flag = false;
	}
	else
	{
		return false;
		jack_pot_flag = false;
	}
}






void Slot_machine::Logic_game(Player& player)
{

	create_number();

	
		if (Check_result())
		{
			if (Check_result() && jack_pot_flag)
			{
				std::cout << "JackPot!!! You are lucky" << std::endl;
				player.Set_balanse(player.Get_balanse() + 1000);
				std::cout << "You win! Your balanse is " << player.Get_balanse() << std::endl;
			}
			player.Plus_money();
			std::cout << "Congratulation! Your balanse is " << player.Get_balanse() << std::endl;
		}
	
		if (Check_result() && !jack_pot_flag)
		{
			player.Plus_money();
			std::cout << "Congratulation! Your balanse is " << player.Get_balanse() << std::endl;
		}
		else if (Check_result() && jack_pot_flag)
		{
			std::cout << "JackPot!!! You are lucky" << std::endl;
			player.Set_balanse(player.Get_balanse() + 1000);
			std::cout << "You win! Your balanse is " << player.Get_balanse() << std::endl;
		}
	
		else
		{
			player.Minus_money();
			std::cout << "I`m sorry! Your balanse is " << player.Get_balanse() << std::endl;
		}
}
