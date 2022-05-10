#pragma once

class Player
{
private:
	float m_Balanse;
public:
	Player() = default;
	Player(float balanse) : m_Balanse(balanse){}
	float Get_balanse() const;

	void Set_balanse(float balanse);

	void Plus_money();

	void Minus_money();
};