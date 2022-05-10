#include"Slot_machine.h"

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
	 
		 if (_kbhit()) // слушатель нажатия на клаву
		 {
			 if (_getch() == 46) // ждёт нажатия . на клаву без Enter после этого
			 {
				 create_number();
					print_res();
				 if (Check_result())
				 {
					 if (Check_result() && flag)
					 {
						 std::cout << "JackPot!!! You are lucky" << std::endl;
						 human->Set_balanse(human->Get_balanse() + 1000);
					 }
					 human->Plus_money();
				 }
				 else
				 {
					 human->Minus_money();
				 }
			 }
			 else
			 {
				 std::cout << "Game over" << " " << "You win" << " " << human->Get_balanse() << std::endl;
				 
			 }
			 std::cout << "Your bank is " << human->Get_balanse() << std::endl;
		 }
	 
 }