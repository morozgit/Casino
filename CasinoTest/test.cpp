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