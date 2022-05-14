#include"Roulette.h"

Roulette::Roulette()
{
	m_number = 0;
	human = nullptr;
}
Roulette::Roulette(float balanse)
{
	m_number = 0;
	human = std::make_unique<Player>(balanse);
}

bool Roulette::Check_result()
{
	std::cout << "Check_result Raulette" << std::endl;
	return 0;
}

 void Roulette::Logic_game()
{
	std::cout << "Logic Raulette" << std::endl;
}
