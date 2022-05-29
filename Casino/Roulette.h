#pragma once
#include"Casino.h"
//#include<vector>
#include<functional>



//enum class Color { green = 0, black = 1, red = 2 };

class Roulette : public Casino
{
private:
	std::string color;
	std::pair<int, std::string> m_bet;
	std::unique_ptr<Player> ptr_human;
public:
	Roulette();
	Roulette(float balanse);
	~Roulette(){}
	std::string generate_color(int num);
	virtual void Logic_game() override;
	virtual bool Check_result() override;
	virtual void create_number() override;
	

	//friend std::ostream& operator<< (std::ostream& os, Color& num);// lambda
	virtual void print_res() override;
};

