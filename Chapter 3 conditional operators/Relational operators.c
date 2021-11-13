#include <stdio.h>

int main() {
	int age;
	printf("Enter the age\n");
	scanf("%d",&age);
	// relational operators
	if(age>=90){
	    printf("The person is not allowed to drive");
	}
	else{
	     printf("The person can drive");
	}
	return 0;
}