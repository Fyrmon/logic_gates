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

    bool AND(std::initializer_list<bool> inputs)
    {
        bool out{ true };
        for(auto inp: inputs)
        {
            out = AND(out,inp);
        }

        return out;
    }

    bool OR(bool a, bool b)
    { 
        return NAND(NAND(a,a), NAND(b,b));
    }

    bool OR(std::initializer_list<bool> inputs)
    {
        bool out{ false };
        for(auto inp : inputs)
            out = OR(out,inp);

        return out;
    }

    bool XOR(bool a,bool b)
    {
        return OR(AND(a,!b),AND(!a,b));  
    }

    bool XOR(std::initializer_list<bool> inputs)
    {
        bool res{false};
        for(auto inp : inputs)
            res = XOR(res,inp);

        return res;
    }

    bool NOR(bool a,bool b)
    {
        return NOT(OR(a,b));
    }

    bool NOR(std::initializer_list<bool> inputs)
    {
        bool output{ true };
        for(auto inp : inputs)
            output = NOR(output,inp);

        return output;
    }

    bool XNOR(bool a,bool b)
    {
        return OR(AND(a,b),AND(NOT(a),NOT(b)));
    }

    bool XNOR(std::initializer_list<bool> inputs)
    {
        return !XOR(inputs);
    }
};