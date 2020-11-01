#ifndef ADDITIONALFUNCS_H
#define ADDITIONALFUNCS_H

#include<iostream>

double S = 1.0;

class Base{
    public:
    Base(){++count;}
    Base(const Base&){++count;}
    ~Base() {
        S = S/2 - 3*count + 29;
    }

    static size_t howMany()
    { return count; }

    static size_t count;

};

class Alpha:public Base{
    public:
    ~Alpha() { 
        S = S+count;
        Base::count--;
    }
    private:

    Base obj1, obj2;
    static size_t count;
};

class Beta:public Base{
    public:
    ~Beta() { 
        S = S - 2*count - 17; 
        Base::count--;
    }
    private:
    Base obj1, obj2;
    static size_t count;
};

class Gamma:public Base{
     public:
    ~Gamma() { 
        S = S + count - 29;
        Base::count--;
    }

    private:
    Base obj1, obj2;
    static size_t count;
};

size_t Base::count = 0;
size_t Alpha::count = 0;
size_t Beta::count = 0;
size_t Gamma::count = 0;

#endif
