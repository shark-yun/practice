#include "fraction.h"
#include <iostream>

Fraction::Fraction() {
    numerator = 0;
    denominator = 1;
}



void Fraction::simplify() {
    int a;
    if (numerator <= denominator) {
        a = numerator;
    }
    else a = denominator;
    for (int i = a; i>=2; i--) {
        if (numerator % i == 0 && denominator % i == 0) {
            numerator = numerator / i;
            denominator = denominator / i;
        } 
    }
 
}
Fraction::Fraction(int Numerator, int Denominator) {
    
    numerator = Numerator;
    denominator = Denominator;
    if (denominator == 0) {
        std::cout << "Denominator can not be zero" << std::endl;
        exit(1);
    }
    simplify();
    
}

Fraction Fraction::multipliedBy(Fraction a)const {
    Fraction result;
    result.numerator = numerator * a.numerator;
    result.denominator = denominator * a.denominator;
    result.simplify();
    return result;
}
Fraction Fraction::dividedBy(Fraction a)const {
    Fraction result;
    result.numerator = numerator * a.denominator;
    result.denominator = denominator * a.numerator;
    result.simplify();
    return result;

}
Fraction Fraction::addedTo(Fraction a)const {
    Fraction result;
    result.numerator = numerator * a.denominator + a.numerator * denominator;
    result.denominator = denominator * a.denominator;
    result.simplify();
    return result;
}


Fraction Fraction::subtract(Fraction a)const {
    Fraction result;
    result.numerator = numerator * a.denominator - a.numerator * denominator;
    result.denominator = denominator * a.denominator;
    result.simplify();
    return result;
}
bool Fraction::isEqualTo(Fraction a) {
    if (numerator == a.numerator || denominator == a.denominator) {
        return true;
    }
    return false;
}
void Fraction::print()const {
    std::cout << numerator << "/" << denominator;
}