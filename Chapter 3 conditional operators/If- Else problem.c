#include <stdio.h>

int main() {
    int age;
    printf("Enter the age\n");
    scanf("%d",&age);
    // logical operators
    if(age<=70 && age>=18){
        printf("You can drive\n");
    }
    else{
        printf("You cannot drive/n"); 
    }
	return 0;
}