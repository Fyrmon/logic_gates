#ifndef LOGIC_GATES_HPP
#define LOGIC_GATES_HPP
#include <initializer_list>

namespace LogicGates
{
    bool NAND(bool a, bool b);
    bool NOT(bool a);

    bool AND(bool a,bool b);
    bool AND(std::initializer_list<bool> inputs);
    
    bool OR(bool a,bool b);
    bool OR(std::initializer_list<bool> inputs );

    bool XOR(bool a,bool b);
    bool XOR(std::initializer_list<bool> inputs);

    bool NOR(bool a,bool b);
    bool NOR(std::initializer_list<bool> inputs);

    bool XNOR(bool a,bool b);
    bool XNOR(std::initializer_list<bool> inputs);
};

#endif