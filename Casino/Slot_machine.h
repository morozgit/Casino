#pragma once
#include"ICasino.h"



class Slot_machine : public ICasino
{
public:
	Slot_machine();

	~Slot_machine() override = default;

	void create_number();

	virtual bool Check_result()   override;

	virtual void Logic_game(Player& player) override;

private:
	int number1, number2, number3;
	bool jack_pot_flag = false;
};

