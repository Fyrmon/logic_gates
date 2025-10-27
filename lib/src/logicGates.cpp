#include "logicGates.hpp"

namespace LogicGates
{
    bool OR(bool a, bool b) { return a || b; }
    bool OR(std::initializer_list<bool> inputs)
    {
        for(auto inp : inputs)
            if(inp) return true;

        return false;
    }

    bool AND(bool a, bool b){ return a && b; }
    bool AND(std::initializer_list<bool> inputs)
    {
        for(auto inp: inputs)
            if(!inp) return false;

        return true;
    }

    bool NOT(bool a) { return !a;}

    bool XOR(bool a,bool b)
    {
        return (a && !b) || (!a && b);     
    }
};