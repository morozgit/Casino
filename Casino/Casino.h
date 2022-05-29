#pragma once
#include<iostream>
#include <conio.h>
#include<memory>
#include"Player.h"
#include<random>

class Casino
{
private:

public:
	virtual bool Check_result() = 0;
	virtual void Logic_game() = 0;
	virtual void print_res();
	virtual void create_number() = 0;

	virtual ~Casino(){}

};

