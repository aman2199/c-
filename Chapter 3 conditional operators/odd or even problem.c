#include <stdio.h>
// to check whether given number is odd or even
int main() {
	int a,b;
	printf("Enter the number\n");
	scanf("%d", &a);
	// if else statement , conditional operators
	if(a%2==0){
	    printf("%d is even\n",a);
	}
	else{
	  printf("%d is odd\n",a);  
	}
	return 0;
}