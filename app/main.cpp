#include <iostream>
#include "logicGates.hpp"

int main()
{
    std::cout<<std::boolalpha;
    std::cout<<LogicGates::XNOR({0,0,0,0,0,0,1})<<'\n';
    std::cout<<"All fine....for now\n";
    return 0;
}