#pragma once
#include"Casino.h"
//#include<vector>
#include<functional>

enum class Color : int
{ 
	green = 0, 
	black = 1, 
	red = 2
};

class Roulette : public Casino
{
private:
	std::string color;
	std::pair<int, std::string> m_bet;
	//std::unique_ptr<Player> ptr_human;
public:
	Roulette();
	Roulette(float balanse);
	~Roulette() override = default;
	std::string generate_color(int num);
	virtual void Logic_game(Player &player) override;
	virtual bool Check_result() override;
	std::pair<int, std::string> Create_cell();
	

	//friend std::ostream& operator<< (std::ostream& os, Color& num);// lambda
	virtual void print_res() override;

};

