/*Assignment - 13 C Language LIVE Community Classes MySirG*/
/*2. Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int num1, num2, option;
	
	printf("Enter Number1 : ");
	scanf("%d",&num1);
	
	printf("Enter Number2 : ");
	scanf("%d",&num2);
	
	printf("Enter Option For Arithmetic Operation: \n");
	scanf("%d",&option);
	
	switch(option)
	{
		case 1:
			printf("Addition\n");
			printf("Result = %d",num1+num2);
			break;
		case 2:
			printf("Subtraction\n");
			printf("Result = %d",num1 - num2);
			break;
		case 3:
			printf("Multiplication\n");
			printf("Result = %d",num1 * num2);
			break;
		case 4:
			printf("Division\n");
			printf("Result = %d",num1/num2);
			break;
		case 5:
			printf("Exit");
			exit(0);
			break;
			
	}
	getch();
}
/*
Atish Kumar Sahu
9937401932
kumarsahuatish280301@gmail.com
*/