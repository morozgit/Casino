#pragma once
#include<random>


class One_arm_bandit
{
private:
	int number1, number2, number3;
public:
	bool flag = false;
	void create_number()
	{
		number1 = std::_Random_device() % 10;
		number2 = std::_Random_device() % 10;
		number3 = std::_Random_device() % 10;
		/*number1 = 1;
		number2 = 9;
		number3 = 9;*/
		
	}
	
	bool check_resalt()
	{
		flag = false;
		if (number1 == number2 || number1 == number3 || number2 == number3)
		{
			if (number1 == number2 && number2 == number3)
			{
				flag = true;

				return flag;
			}
			return true;
			flag = false;
		}
		else
		{
			return false;
			flag = false;
		}
	}
	friend std::ostream& operator<<(std::ostream& os, const std::random_device &num);
	void print_res()
	{
		std::cout << number1 << " " << number2 << " " << number3 << std::endl;
	}

};
std::ostream& operator<<(std::ostream& os, const std::random_device& num)
{
	os << num;
	return os;
}