#include"Player.h"

float Player::Get_balanse() const
{
	return m_Balanse;
}

void Player::Set_balanse(float balanse)
{
	m_Balanse = balanse;
}

void Player::Plus_money()
{
	m_Balanse++;
}

void Player::Minus_money()
{
	m_Balanse--;
}