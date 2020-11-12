

#include <iostream>
#include <cassert>
using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;
    void  simplify();

public:
    Fraction(int a, int b);
    Fraction();

    Fraction multipliedBy(Fraction a)const;
    Fraction dividedBy(Fraction a)const;
    Fraction addedTo(Fraction a)const;
    Fraction  subtract(Fraction a)const;
   
    bool isEqualTo(Fraction a);
    void print()const;


}; 
#pragma once
