#include "stdio.h"
#include "Complex_C.hpp"

// TASK - write and test complexConjugate, complexNegate, complexSubtract, complexMagnitude, complexMultiply and complexDivide

int main() {
    printf("\n\nTASK312\n");

    //Create instance of a complex number
    ComplexNumber_C p = {2.0, 3.0};
    ComplexNumber_C q = {1.0, 1.0};
    complexDisplay("p", p);
    complexDisplay("q", q);
    
    printf("ADD\n");
    ComplexNumber_C sum = complexAdd(p, q);
    complexDisplay("p+q", sum);

    printf("CONJUGATE\n");
    ComplexNumber_C conjugate_p = complexConjugate(p);
    complexDisplay("p", conjugate_p);
    ComplexNumber_C conjugate_q = complexConjugate(q);
    complexDisplay("q", conjugate_q);

    printf("NEGATE\n");
    ComplexNumber_C negate_p = complexNegate(p);
    complexDisplay("p", negate_p);
    ComplexNumber_C negate_q = complexNegate(q);
    complexDisplay("q", negate_q);
    
    printf("SUBTRACT\n");
    ComplexNumber_C negate_q2 = complexNegate(q);
    complexDisplay("q", negate_q2);
    ComplexNumber_C subtract = complexAdd(p, negate_q2);
    complexDisplay("Subtract", subtract);

    ComplexNumber_C subtract_2 = complexSubtract(p, q);
    complexDisplay("Subtract", subtract_2);

    printf("MAGNITUDE\n");
    float mag_p = complexMagnitude(p);
    printf("Magnitude of p = %f\n", mag_p);
    float mag_q = complexMagnitude(q);
    printf("Magnitude of q = %f\n", mag_q);

    printf("MULTIPLY\n");
    ComplexNumber_C multiple = complexMulitply(p,q);
    complexDisplay("Multiple", multiple);

    printf("DIVIDE\n");
    ComplexNumber_C divide = complexDivide(p,q);
    complexDisplay("Divide", divide);

    printf("CONJUGATE IN PLACE\n");
    ComplexNumber_C icp = p;
    complexConjugateInPlace(icp);
    complexDisplay("p", icp);
    ComplexNumber_C icq = q;
    complexConjugateInPlace(icq);
    complexDisplay("q", icq);

    printf("NEGATE IN PLACE\n");
    ComplexNumber_C inp = p;
    complexNegateInPlace(inp);
    complexDisplay("p", inp);
    ComplexNumber_C inq = q;
    complexNegateInPlace(inq);
    complexDisplay("q", inq);

    while (true) {
    }
}

