#include"Roulette.h"

Roulette::Roulette()
{
	m_bet = {0, "green" };
	//ptr_human = nullptr;
}
Roulette::Roulette(float balanse)
{
	m_bet = { 0, "green" };
	//ptr_human = std::make_unique<Player>(balanse);
}

bool Roulette::Check_result()
{
	std::cout << "Check_result Raulette" << std::endl;
	return 0;
}

std::pair<int, std::string> Roulette::Create_cell()
{
	m_bet.first = rand() % 36;
	m_bet.second = generate_color(rand() % 2);
	//std::cout << m_bet.first << " " << m_bet.second << std::endl;
	return m_bet;
}


void Roulette::Logic_game(Player &player)
{

	std::cout << "Logic Raulette " << std::endl << Create_cell().first << " " << Create_cell().second << std::endl;
}

 std::string Roulette::generate_color(int num)
 {
	if(num == 0)
	{
		return "green";
	}
	else if(num % 2 == 0)
	{
		return "red";
	}
	else
	{
		return "black";
	}
 }

 void Roulette::print_res()
 {
	 Casino::print_res();
	 //std::cout << ptr_human->Get_balanse() << std::endl;
	 

 }

 //std::ostream& operator<< (std::ostream& os, Color& num)
 //{
	// //os << num;
	// return os;
 //}