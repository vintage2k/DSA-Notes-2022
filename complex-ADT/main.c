


#include <stdio.h>
#include "complex.h"

int main(int argc, char **argv)
{
	complex c;
	Complex complex_array[10];
	int c;
	c = CxCreate(0.0,0.0);
	for (int i=0,i<10,i++){
		complex_array[i] = CxCreate(double(i),double(i));
	}
	for (int i=0,i<10,i++){
		c = CxAddition(complex_array[i],c);
	}
	CxPrint(c);
	return 0;
}

