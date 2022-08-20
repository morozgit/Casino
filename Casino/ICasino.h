#pragma once
#include<iostream>
#include <conio.h>
#include<memory>
#include"Player.h"
#include<random>

// KE: интерфейс всегда иммеет формат ICasino и название файла тоже ICasino.h
class ICasino
{
private:

public:
	ICasino() = default;
	virtual bool Check_result() = 0;
	virtual void Logic_game(Player& player) = 0;

	virtual ~ICasino() = default;

};

#pragma once
