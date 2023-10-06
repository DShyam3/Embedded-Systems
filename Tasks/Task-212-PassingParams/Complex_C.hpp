#ifndef __Complex_C__
#define __Complex_C__

typedef struct {
  double real;
  double imag;
} ComplexNumber_C;

extern ComplexNumber_C complexAdd(const ComplexNumber_C a, const ComplexNumber_C b);
extern void complexDisplay(const char *strName, const ComplexNumber_C u);
extern ComplexNumber_C complexConjugate(const ComplexNumber_C c);
extern ComplexNumber_C complexNegate(const ComplexNumber_C d);
extern ComplexNumber_C complexSubtract(const ComplexNumber_C e, const ComplexNumber_C f);
extern float complexMagnitude(const ComplexNumber_C g);
extern ComplexNumber_C complexMulitply(const ComplexNumber_C h, const ComplexNumber_C i);
extern ComplexNumber_C complexDivide(const ComplexNumber_C j, const ComplexNumber_C k);
extern void complexConjugateInPlace(ComplexNumber_C& l);
extern void complexNegateInPlace(ComplexNumber_C& m);

#endif
