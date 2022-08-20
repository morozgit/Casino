#pragma once
#pragma once
#include"ICasino.h"
#include<map>
#include<functional>

//enum class Color : int
//{ 
//	green = 0, 
//	red = 1,
//	black = 2,
//	
//};

class Roulette : public ICasino
{
public:
	Roulette() = default;

	~Roulette() override = default;

	virtual void Logic_game(Player& player) override;

	virtual bool Check_result() override;

	std::pair<const int, std::string> Create_cell();

	bool Do_you_want_to_contine(const char non_stop);

	void Cin_exeption(char str);

private:
	// заполнение рулетки
	std::map<int, std::string> m_bet{

		{0,"green"},{1,"red"},{2,"black"},{3,"red"},{4,"black"},{5,"red"},{6,"black"},{7,"red"},{8,"black"},{9,"red"},{10,"black"},{11,"black"},
		{12,"red"},{13,"black"},{14,"red"},{15,"black"},{16,"red"},{17,"black"},{18,"red"},{19,"red"},{20,"black"}, {21,"red"},{22,"black"},{23,"red"},
		{24,"black"},{25,"red"},{26,"black"},{27,"red"},{28,"black"},{29,"black"},{30,"red"},{31,"black"},{32,"red"},{33,"black"},{34,"red"},{35,"black"},
		{36,"red"}
	};

};


