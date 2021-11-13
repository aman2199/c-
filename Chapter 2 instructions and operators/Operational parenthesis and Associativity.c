#include <stdio.h>

int main() {
	printf("the value of 5/2 is equal to %d\n",5/2);
	// int & int = int
	printf("the value of 5.0/2 is equal to %f\n",5.0/2);
	// int & float = float 
	printf("the value of 3.0/9.0 is equal to %f\n",3.0/9.0);
	// float & float = float
	int x=2;
	int y=3;
	printf("the value of 3*x-8*y is equal to %d\n",3*x-8*y);
	// operational perenthesis and associativity
	// order of parenthesis 
	// 1st *, /, %
	// 2nd + & -
	// 3rd =
	printf("the value of 8*y/3*x is equal to %d\n",8*y/3*x);
	// in the case of * & / , follow left to right order
	// step 1.  8*y =24 
	// step 2.  24/3=8 
	// step 3.  8*x=16
	return 0;
}