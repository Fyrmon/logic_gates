#ifndef LOGIC_GATES_HPP
#define LOGIC_GATES_HPP
#include <initializer_list>

namespace LogicGates
{
    bool OR(bool a,bool b);
    bool OR(std::initializer_list<bool> inputs );
    bool AND(bool a,bool b);
    bool AND(std::initializer_list<bool> inputs);
    bool NOT(bool a);
    bool XOR(bool a,bool b);
};

#endif