#include <stdio.h>
#include <math.h>
#include <assert.h>//functions 

double hypotenuse(double side1, double side2);
void testHypotenuse();

int main(void) {

	testHypotenuse();
	
	return 0;
}

double hypotenuse(double side1, double side2) {
	return (sqrt(pow(side1, 2.0) + pow(side2, 2.0)));
}

void testHypotenuse() {
	assert(fabs(hypotenuse(3.0, 4.0)-5.0) <0.01);
	assert(fabs(hypotenuse(5.0, 12.0) -13.0) <0.01);
	assert(fabs(hypotenuse(8.0, 15.0) - 17.0 )<0.01);
	
	printf("hypotenuse(side1, side2) unit tests passed!!");	
}

