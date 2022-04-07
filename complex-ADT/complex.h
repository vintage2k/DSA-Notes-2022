
#ifndef __COMPLEX_H_
#define __COMPLEX_H_
struct complex_{
	double a; //real part
	double b; // imaginary part
};
typedef struct complex_ Complex;
/*
 * Complex addition
 * Inputs: Two constant complex numbers
 * Output: One new complex number, c1 + c2
*/

Complex CxAddition(const Complex c1, const Complex c2); 
/*
 * Complex multiplication
 * Inputs: Two constant complex numbers
 * Output: One new complex number, c1 * c2
*/

Complex CxMultiplication(const Complex c1, const Complex c2);
Complex CxCreate(double real, double imaginary); 
double CxArg(const Complex cx); //theta
double CxMod(const Complex cx); //|cx|
void CxPrint(const Complex cx); //print a complex number
Complex CxInverse(const Complex cx); // complex reciprocal
Complex CxConjugate(const Complex cx); // complex conjugate
Complex CxSquareRoot(const Complex cx); // square root of cx
Complex CxDivision(const Complex c1, const Complex c2); // c1/c2
#endif
