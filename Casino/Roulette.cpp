#include"Roulette.h"

Roulette::Roulette()
{
	m_bet = {0, "green" };
	ptr_human = nullptr;
}
Roulette::Roulette(float balanse)
{
	m_bet = { 0, "green" };
	ptr_human = std::make_unique<Player>(balanse);
}

bool Roulette::Check_result()
{
	std::cout << "Check_result Raulette" << std::endl;
	return 0;
}

void Roulette::create_number()
{
	m_bet.first = rand() % 100;
	m_bet.second = generate_color(rand() % 2);
	std::cout << m_bet.first << " " << m_bet.second << std::endl;
}


void Roulette::Logic_game()
{

	std::cout << "Logic Raulette " << ptr_human->Get_balanse() << std::endl;
}

 std::string Roulette::generate_color(int num)
 {
	 if (m_bet.first != 0) {
		 switch (num)
		 {
		 case 0:
			 return "red";
		 case 1:
			 return "black";
		 }
	 }
	 else
	 {
		 return "green";
	 }


 }

 void Roulette::print_res()
 {
	 Casino::print_res();
	 std::cout << ptr_human->Get_balanse() << std::endl;
	 

 }

 //std::ostream& operator<< (std::ostream& os, Color& num)
 //{
	// //os << num;
	// return os;
 //}