#include <stdio.h>

int main() {
    int age;
    int vippass=o;
    // vippass=1;
    printf("Enter the age\n");
    scanf("%d",&age);
    // logical operators
    // || or logical operators
    // && and logical operator 
    // ! not logical operator 
    if((age<=70 && age>=18)||!(vippass=1))
    // any one can drive irrespective of his age
    {
        printf("You can drive\n");
    }
    else{
        printf("You cannot drive/n"); 
    }
	return 0;
}