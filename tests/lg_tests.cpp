#include <gtest/gtest.h>
#include "logicGates.hpp"

TEST(LG_TEST, LG_NAND)
{
    EXPECT_TRUE(LogicGates::NAND(0,0));
}

TEST(LG_TEST, LG_NOT)
{
    EXPECT_FALSE(LogicGates::NOT(true));
    EXPECT_TRUE(LogicGates::NOT(false));
}

TEST(LG_Test, LG_AND)
{
    EXPECT_TRUE(LogicGates::AND(true,true));
    EXPECT_FALSE(LogicGates::AND(true,false));
    EXPECT_FALSE(LogicGates::AND(false,false));

    EXPECT_TRUE(LogicGates::AND({1,1,1,1,1}));
    EXPECT_FALSE(LogicGates::AND({1,1,1,1,0}));
}

TEST(LG_Test, LG_OR)
{
    EXPECT_TRUE(LogicGates::OR(1,1));
    EXPECT_TRUE(LogicGates::OR(0,1));
    EXPECT_FALSE(LogicGates::OR(0,0));

    EXPECT_TRUE(LogicGates::OR({0,0,0,0,0,1}));
    EXPECT_FALSE(LogicGates::OR({0,0,0,0}));
}

TEST(LG_TEST, LG_XOR)
{
    EXPECT_TRUE(LogicGates::XOR(0,1));
    EXPECT_TRUE(LogicGates::XOR(1,0));
    EXPECT_FALSE(LogicGates::XOR(1,1));
    EXPECT_FALSE(LogicGates::XOR(0,0));

    EXPECT_FALSE(LogicGates::XOR({1,1,0,0}));
    EXPECT_TRUE(LogicGates::XOR({1,0,0,0,0}));
    EXPECT_FALSE(LogicGates::XOR({1,0,0,0,0,1}));
    EXPECT_TRUE(LogicGates::XOR({1,0,0,0,1,0,0,1}));
    EXPECT_TRUE(LogicGates::XOR({1,0,1,0,1,0,1,1}));
    EXPECT_TRUE(LogicGates::XOR({1,0}));
    EXPECT_FALSE(LogicGates::XOR({0}));
    EXPECT_FALSE(LogicGates::XOR({0,1,1}));
}

TEST(LG_TEST, LG_NOR)
{
    EXPECT_TRUE(LogicGates::NOR(0,0));
    EXPECT_FALSE(LogicGates::NOR(1,0));
    EXPECT_FALSE(LogicGates::NOR(0,1));
    EXPECT_FALSE(LogicGates::NOR(1,1));

    EXPECT_TRUE(LogicGates::NOR({0,0,0,0,0,0}));
    EXPECT_FALSE(LogicGates::NOR({0,0,0,0,0,1}));
    EXPECT_FALSE(LogicGates::NOR({0,1,0,0,0,0}));
    EXPECT_TRUE(LogicGates::NOR({0,0}));
    EXPECT_FALSE(LogicGates::NOR({0,1}));
}

TEST(LG_TEST, LG_XNOR)
{
    EXPECT_TRUE(LogicGates::XNOR(0,0));
    EXPECT_TRUE(LogicGates::XNOR(1,1));
    EXPECT_FALSE(LogicGates::XNOR(1,0));
    EXPECT_FALSE(LogicGates::XNOR(0,1));

    EXPECT_TRUE(LogicGates::XNOR({0,0}));
    EXPECT_TRUE(LogicGates::XNOR({1,1}));
    EXPECT_FALSE(LogicGates::XNOR({1,1,1,1,1}));
    EXPECT_FALSE(LogicGates::XNOR({0,1,0}));
    EXPECT_TRUE(LogicGates::XNOR({0,1,0,1}));
    EXPECT_FALSE(LogicGates::XNOR({0,0,0,0,0,0,1}));
}

TEST(LG_TEST, LG_INHIBIT)
{
    EXPECT_FALSE(LogicGates::INHIBIT(0,0));
    EXPECT_TRUE(LogicGates::INHIBIT(1,0));
    EXPECT_FALSE(LogicGates::INHIBIT(0,1));
    EXPECT_FALSE(LogicGates::INHIBIT(1,1));
}