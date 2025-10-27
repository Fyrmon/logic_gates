#include <iostream>
#include "logicGates.hpp"

int main()
{
    std::cout<<std::boolalpha;
    std::cout<<LogicGates::OR({0,0,0,0,0,0})<<'\n';
    std::cout<<LogicGates::AND({1,1,0,1,1})<<'\n';
    std::cout<<"All fine....for now\n";
    return 0;
}