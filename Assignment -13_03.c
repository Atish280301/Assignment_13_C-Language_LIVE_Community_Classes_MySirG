/*Assignment - 13 C Language LIVE Community Classes MySirG*/
/*3. Write a program which takes the day number of a week and displays a unique
greeting message for the day.*/

#include<stdio.h>
#include<conio.h>

int main()
{
	int num;
	
	printf("Enter The Day Number : ");
	scanf("%d",&num);
	
	switch(num)
	{
		case 1:
			printf("Hi I Am Sunday!");
			break;
		case 2:
			printf("Hi I Am Monday");
			break;
		case 3:
			printf("Hi I Am Tuesday");
			break;
		case 4:
			printf("Hi I Am Wednesday");
			break;
		case 5:
			printf("Hi I Am Thursday");
			break;
		case 6:
			printf("Hi I Am Friday");
			break;
		case 7:
			printf("Hi I Am Saturday");
			break;
		default:
			printf("Invalid Day Number");
	}
	getch();
}
/*
Atish Kumar Sahu
9937401932
kumarsahuatish280301@gmail.com
*/