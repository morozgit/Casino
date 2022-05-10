#pragma once
#include<iostream>
#include <conio.h>
#include"Player.h"

class Casino
{
private:

public:
	virtual bool Check_result() = 0;
	virtual void Logic_game() = 0;

	virtual ~Casino(){}

};

