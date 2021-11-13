#include <stdio.h>
#include <math.h>
int main() {
	int a=2;
	int b=5;
	printf(" The value of a+b is %d\n",a+b);// +-/* are operators
	printf(" The value of a-b is %d\n",a-b);// a and b are operants
	printf(" The value of a*b is %d\n",a*b);
	printf(" The value of a/b is %d\n",a/b);
	int z=a*b;// legal
   //	int a*b=z;// illegal
	printf(" The value of z is %d\n",z);
	printf("5 when divided by 2 leaves the remainder of %d\n",5%2);
	// % is a modulus operator
	printf("-5 when divided by 2 leaves the remainder of %d\n",-5%2);
	// the sign of remainder is same as that of  the sign of numerator
	// no oprator is assumed to be present in c language as example
	// printf("the value of a*b is %d",(a)(b)or a.b);
    // there is no operator of exponential function in c language
    //	printf("the value of 4 to the power 5 is equal to %d",4^5);
    // will not produce any result
    // we can use pow()
    printf("the value of 4 to the power 5 is equal to %f",pow(4, 5));
 	return 0;
}