#include"Slot_machine.h"

Slot_machine::Slot_machine() 
{
	number1 = 0;
	number2 = 0;
	number3 = 0;
	//human = nullptr;
}

Slot_machine::Slot_machine(float balanse)
{
	number1 = 0;
	number2 = 0;
	number3 = 0;
	//human = std::make_unique<Player>(balanse);
}

void Slot_machine::create_number()
{
	number1 = rand() % 10;
	number2 = rand() % 10;
	number3 = rand() % 10;
	std::cout << number1 << " " << number2 << " " << number3 << std::endl;
	/*number1 = 1;
	number2 = 9;
	number3 = 9;*/

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
 
 void Slot_machine::print_res()
 {
	 Casino::print_res();
	 //std::cout << human->Get_balanse() << std::endl;
	 
 }
 

 /*std::ostream& operator<<(std::ostream& os, const std::random_device& num)
 {
	 os << num;
	 return os;
 }*/

 

 void Slot_machine::Logic_game(Player &player)
 {
	 //std::cout << "Slot_machine::Logic_game()" << std::endl;
	 
	create_number();
	
	if (Check_result())
	{
		if (Check_result() && jack_pot_flag)
		{
			std::cout << "JackPot!!! You are lucky" << std::endl;
			player.Set_balanse(player.Get_balanse() + 1000);
			std::cout << player.Get_balanse() << std::endl;
		}
		player.Plus_money();
		print_res();
	}
	else
	{
		//human->Minus_money();
		print_res();
	} 
 }
 