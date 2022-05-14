#pragma once
#include"Casino.h"

class Roulette : public Casino
{
private:
	int m_number = 0;
	std::unique_ptr<Player> human;
public:
	Roulette();
	Roulette(float balanse);
	~Roulette(){}
	virtual void Logic_game();
	virtual bool Check_result()   override;

};

