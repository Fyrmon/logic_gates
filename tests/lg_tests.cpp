#include <gtest/gtest.h>
#include "logicGates.hpp"

TEST(LG_Test, LG_OR)
{
    EXPECT_EQ(LogicGates::OR(1,1),true);
    EXPECT_EQ(LogicGates::OR(0,1),true);
    EXPECT_EQ(LogicGates::OR(0,0),false );

    EXPECT_EQ(LogicGates::OR({0,0,0,0,0,1}),true);
    EXPECT_EQ(LogicGates::OR({0,0,0,0}),false);
}

TEST(LG_Test, LG_AND)
{
    EXPECT_EQ(LogicGates::AND(true,true),true);
    EXPECT_EQ(LogicGates::AND(true,false),false);
    EXPECT_EQ(LogicGates::AND(false,false),false);

    EXPECT_EQ(LogicGates::AND({1,1,1,1,1}),true);
    EXPECT_EQ(LogicGates::AND({1,1,1,1,0}),false);
}

TEST(LG_TEST, LG_NOT)
{
    EXPECT_EQ(LogicGates::NOT(true),false);
    EXPECT_EQ(LogicGates::NOT(false),true);
}

TEST(LG_TEST, LG_XOR)
{
    EXPECT_EQ(LogicGates::XOR(0,1),true);
    EXPECT_EQ(LogicGates::XOR(1,0),true);
    EXPECT_EQ(LogicGates::XOR(1,1),false);
    EXPECT_EQ(LogicGates::XOR(0,0),false);

    EXPECT_EQ(LogicGates::XOR({1,1,0,0}),false);
    EXPECT_EQ(LogicGates::XOR({1,0,0,0,0}),true);
    EXPECT_EQ(LogicGates::XOR({1,0,0,0,0,1}),false);
    EXPECT_EQ(LogicGates::XOR({1,0,0,0,1,0,0,1}),true);
    EXPECT_EQ(LogicGates::XOR({1,0,1,0,1,0,1,1}),true);
    EXPECT_EQ(LogicGates::XOR({1,0}),true);
    EXPECT_EQ(LogicGates::XOR({0}), false);
}