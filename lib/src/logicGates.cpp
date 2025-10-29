#include "logicGates.hpp"

namespace LogicGates
{
    // The one to rule them all
    bool NAND(bool a, bool b)
    {
        return !(a & b);
    }

    bool NOT(bool a)
    { 
        return NAND(a,a);
    }

    bool AND(bool a, bool b)
    {
        return NOT(NAND(a,b));
    }

    bool OR(bool a, bool b) { return a || b; }
    bool OR(std::initializer_list<bool> inputs)
    {
        for(auto inp : inputs)
            if(inp) return true;

        return false;
    }

    bool AND(std::initializer_list<bool> inputs)
    {
        bool out{ true };
        for(auto inp: inputs)
        {
            out = AND(out,inp);
        }

        return out;
    }

    bool XOR(bool a,bool b)
    {
        return a^b;    
    }

    bool XOR(std::initializer_list<bool> inputs)
    {
        bool res{false};
        for(auto inp : inputs)
            res^=inp;

        return res;
    }

    bool NOR(bool a,bool b)
    {
        return !(a || b);
    }

    bool NOR(std::initializer_list<bool> inputs)
    {
        for(auto inp : inputs)
            if(inp) return false;

        return true;
    }
};