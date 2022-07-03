#pragma once
#include<iostream>
#include <conio.h>
#include<memory>
#include"Player.h"
#include<random>

// KE: интерфейс всегда иммеет формат ICasino и название файла тоже ICasino.h
class Casino
{
private:

public:
	virtual bool Check_result() = 0;
	virtual void Logic_game(Player &player) = 0;
	virtual void print_res();
	//virtual void create_number() = 0;

	virtual ~Casino() = default;

};

