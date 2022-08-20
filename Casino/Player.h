#pragma once
#include <string>

class Player
{
private:
	// Имя игрока
	std::string m_name;
	float m_Balanse;
public:
	Player() = default;
	Player(std::string name, float balanse) : m_name(name), m_Balanse(balanse) {}
	float Get_balanse() const;

	void Set_balanse(float balanse);

	void Plus_money();

	void Minus_money();
}; 
