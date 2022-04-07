#include "complex.h"
#include <stdio.h>

Complex CxAddition(const Complex c1, const Complex c2){
	Complex c3;
	c3.a = c1.a + c2.a;
	c3.b = c1.b + c2.b;
	return c3;
}
Complex CxMultiplication(const Complex c1, const Complex c2){
	Complex c3;
	c3.a = (c1.a * c2.a) - c1.b * c2.b;
	c3.b = (c1.b * c2.a) + (c2.b * c1.a);
	return c3;
}
Complex CxCreate(double real, double imaginary){
	Complex c;
	c.a = real;
	c.b = imaginary;
	return c;
}
double CxMod(const Complex cx){
	double mod;
	mod =(cx.a*cx.a) + (cx.b*cx.b);
	return mod;
}

void CxPrint(const Complex cx){
	printf("\n Complex Number c = %lf + i%lf",cx.a,cx.b);
}

Complex CxInverse(const Complex cx){
	Complex ci;
	ci.a = cx.a / (cx.a*cx.a + cx.b*cx.b);
	ci.b = -1 * cx.a / (cx.a*cx.a + cx.b*cx.b);
	return ci;
}


Complex CxConjugate(const Complex cx){
	Complex c;
	c.a = cx.a;
	c.b = -1*cx.b;
	return c;
}

Complex CxDivision(const Complex c1, const Complex c2){
	Complex c3;
	c3 = CxMultiplication(c1,CxInverse(c2));
	return c3;
}


