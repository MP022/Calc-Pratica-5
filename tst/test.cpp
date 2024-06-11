#include <gtest/gtest.h>
#include "Calculadora.hpp"

int main(int argc, char** argv) 
{
    ::testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}

TEST(Calculadora, SomaTeste) 
{
    Calculadora calc;
    
    EXPECT_EQ(calc.Soma(1, 2), 3);
    EXPECT_EQ(calc.Soma(10, 5), 15);
    EXPECT_EQ(calc.Soma(27, 32), 59);
    EXPECT_EQ(calc.Soma(80, 20), 100);
    EXPECT_EQ(calc.Soma(100000, 1), 100001);
    EXPECT_EQ(calc.Soma(67, 27), 94);
}

TEST(Calculadora, SubtracaoTeste) 
{
    Calculadora calc;
    
    EXPECT_EQ(calc.Sub(1, 2), -1);
    EXPECT_EQ(calc.Sub(10, 5), 5);
    EXPECT_EQ(calc.Sub(27, 32), -5);
    EXPECT_EQ(calc.Sub(80, 20), 60);
    EXPECT_EQ(calc.Sub(100000, 1), 99999);
    EXPECT_EQ(calc.Sub(67, 27), 40);
}

TEST(Calculadora, MultiplicaoTeste) 
{
    Calculadora calc;
    
    EXPECT_EQ(calc.Multi(1, 2), 2);
    EXPECT_EQ(calc.Multi(10, 5), 50);
    EXPECT_EQ(calc.Multi(27, 32), 864);
    EXPECT_EQ(calc.Multi(80, 20), 1600);
    EXPECT_EQ(calc.Multi(100000, 1), 100000);
    EXPECT_EQ(calc.Multi(67, 27), 1809);
}