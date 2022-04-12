#pragma once

#include <iostream>

using namespace std;
template<class S>

class Stack
{
    public:

        Stack(int);
        ~Stack();
        bool push(const S&);
        bool pop(S&);
        bool empty() const;
        bool full() const;

    private:
    
        int size;
        int top;
        S* d;
};