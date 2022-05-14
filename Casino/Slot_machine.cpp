#include"Slot_machine.h"

Slot_machine::Slot_machine() 
{
	number1 = 0;
	number2 = 0;
	number3 = 0;
	human = nullptr;
}

Slot_machine::Slot_machine(float balanse)
{
	number1 = 0;
	number2 = 0;
	number3 = 0;
	human = std::make_unique<Player>(balanse);
}

void Slot_machine::create_number()
{
	number1 = std::_Random_device() % 10;
	number2 = std::_Random_device() % 10;
	number3 = std::_Random_device() % 10;
	/*number1 = 1;
	number2 = 9;
	number3 = 9;*/

}

 bool Slot_machine::Check_result()
{
	flag = false;
	if (number1 == number2 || number1 == number3 || number2 == number3)
	{
		if (number1 == number2 && number2 == number3)
		{
			flag = true;

			return flag;
		}
		return true;
		flag = false;
	}
	else
	{
		return false;
		flag = false;
	}
}

 void Slot_machine::print_res()
 {
	 std::cout << number1 << " " << number2 << " " << number3 << std::endl;
	 
 }

 std::ostream& operator<<(std::ostream& os, const std::random_device& num)
 {
	 os << num;
	 return os;
 }

 void Slot_machine::Logic_game()
 {
	 std::cout << "Slot_machine::Logic_game()" << std::endl;
	 
				 create_number();
					print_res();
				 if (Check_result())
				 {
					 if (Check_result() && flag)
					 {
						 std::cout << "JackPot!!! You are lucky" << std::endl;
						 human->Set_balanse(human->Get_balanse() + 1000);
						 std::cout << human->Get_balanse() << std::endl;
					 }
					 human->Plus_money();
					 std::cout << human->Get_balanse() << std::endl;
				 }
				 else
				 {
					 human->Minus_money();
					 std::cout << human->Get_balanse() << std::endl;
				 }
			
	 
 }