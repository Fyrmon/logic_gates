#include <iostream>
#include "logicGates.hpp"

int main()
{
    std::cout<<std::boolalpha;
    std::cout<<"0:0: "<<LogicGates::XOR(0,0)<<'\n';
    std::cout<<"0:1: "<<LogicGates::XOR(0,1)<<'\n';
    std::cout<<"1:0: "<<LogicGates::XOR(1,0)<<'\n';
    std::cout<<"1:1: "<<LogicGates::XOR(1,1)<<'\n';
    std::cout<<"All fine....for now\n";
    return 0;
}