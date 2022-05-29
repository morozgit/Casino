#pragma once
#include"Casino.h"



class Slot_machine : public Casino
{
private:
	std::unique_ptr<Player> human;
	int number1, number2, number3;
public:
	Slot_machine();
	Slot_machine(float balanse);

	~Slot_machine(){}
	
	bool flag = false;
	void create_number() override;
		
	virtual bool Check_result()   override;
	
	virtual void Logic_game() override;

	//friend std::ostream& operator<<(std::ostream& os, const std::random_device &num);// lambda

	virtual void print_res() override;

};

