#pragma once

class Player
{
private:
	double _balanse = 100;
public:

	double get_balanse()
	{
		return _balanse;
	}
	void set_balanse(double balanse)
	{
		_balanse = balanse;
	}

	void plus_money()
	{
		_balanse++;
	}
	void minus_money()
	{
		_balanse--;
	}
};