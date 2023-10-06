#include "mbed.h"
#include "Complex_C.hpp"
#include <cmath>

ComplexNumber_C complexAdd(const ComplexNumber_C a, const ComplexNumber_C b) {
    ComplexNumber_C y = a;
    y.real += b.real;
    y.imag += b.imag;
    return y;
}

void complexDisplay(const char *strName, const ComplexNumber_C u) {
    printf("%s = %f + %fj\n", strName, u.real, u.imag);
}

ComplexNumber_C complexConjugate(const ComplexNumber_C c){
    ComplexNumber_C conj = c;
    conj.imag = conj.imag * -1;
    return conj;
}

ComplexNumber_C complexNegate(const ComplexNumber_C d){
    ComplexNumber_C negate = d;
    negate.real = negate.real * -1;
    negate.imag = negate.imag * -1;
    return negate;
}

ComplexNumber_C complexSubtract(const ComplexNumber_C e, const ComplexNumber_C f){
    ComplexNumber_C subtract = e;
    subtract.real -= f.real;
    subtract.imag -= f.imag;
    return subtract;
}

float complexMagnitude(const ComplexNumber_C g){
    float squared = (g.real * g.real) + (g.imag * g.imag);
    float magnitude = sqrt(squared);
    return magnitude;
}

ComplexNumber_C complexMulitply(const ComplexNumber_C h, const ComplexNumber_C i){
    ComplexNumber_C multiply = h;
    multiply.real = (h.real * i.real) - (h.imag * i.imag);
    multiply.imag = (h.real * i.imag) + (h.imag * i.real);
    return multiply;
}

ComplexNumber_C complexDivide(const ComplexNumber_C j, const ComplexNumber_C k){
    float denom = (k.real * k.real) + (k.imag * k.imag);
    ComplexNumber_C divide = j;
    divide.real = ((j.real * k.real) + (j.imag * k.imag)) / denom;
    divide.imag = ((j.imag * k.real) - (j.real * k.imag)) / denom;
    return divide;
}

void complexConjugateInPlace(ComplexNumber_C& l){
    l.imag = -l.imag;
}

void complexNegateInPlace(ComplexNumber_C& m){
    m.real = -m.real;
    m.imag = -m.imag;
}