#include "pch.h"
#include"gtest/gtest.h"
#include"../Casino/Roulette.h"
#include"../Casino/Slot_machine.h"
#include"../Casino/Player.h"


	TEST(TestCaseName, TestName) {
	EXPECT_EQ(1, 1);
	EXPECT_TRUE(true);

}

TEST(TestPlayer, TestPlayerSetBalanse)
{
	Player player;
	player.Set_balanse(100);
	EXPECT_EQ(player.Get_balanse(), 100);

}

#include"../Casino/Player.cpp"
#include"../Casino/Slot_machine.cpp"
#include"../Casino/Roulette.cpp"

TEST(TestPlayer, TestAllFooPlayer) {
	Player player("arti", 100);
	EXPECT_EQ(player.Get_balanse(), 100);
	player.Set_balanse(67);
	EXPECT_EQ(player.Get_balanse(), 67);
	player.Plus_money();
	EXPECT_EQ(player.Get_balanse(), 68);
	player.Minus_money();
	EXPECT_EQ(player.Get_balanse(), 67);
}
TEST(TestSlotMachine, TestAllFooSlotMachine) {
	Player player("arti", 200);
	Slot_machine machine;
	machine.create_number();
	EXPECT_EQ(machine.Check_result(), false); //all numbers are`t the same
	//EXPECT_EQ(machine.Check_result(), true); //two or three numbers are the same 
	machine.Logic_game(player);
	//EXPECT_EQ(player.Get_balanse(), 201); // two numbers the same
	//EXPECT_EQ(player.Get_balanse(), 1200); // three numbers the same

}
TEST(TestRoulette, Do_you_want_to_contine) {
	Roulette roulette;
	Player player("arti", 200);
	EXPECT_EQ(roulette.Do_you_want_to_contine('y'), true);
	EXPECT_EQ(roulette.Do_you_want_to_contine('n'), false);

}
TEST(TestRoulette, Create_cell) {
	Roulette roulette;
	Player player("arti", 200);
	std::pair<const int, std::string> test_pair = { 8,"black" };
	EXPECT_EQ(roulette.Create_cell(), test_pair);
	roulette.Logic_game(player);
	EXPECT_EQ(player.Get_balanse(), 201);
}
class TestCasino : public ::testing::Test
{
public:
	TestCasino();
	~TestCasino();

private:

};

