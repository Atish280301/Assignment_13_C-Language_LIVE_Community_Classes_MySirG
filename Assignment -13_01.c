/*Assignment - 13 C Language LIVE Community Classes MySirG*/
/*1. Write a program which takes the month number as an input and display number of
days in that month.*/

#include<stdio.h>
#include<conio.h>

int main()
{
	int month;
	
	printf("Enter Month Number : ");
	scanf("%d",&month);
	
	switch(month)
	{
		case 1:
			printf("January 31 Days");
			break;
		case 2:
			printf("February 28 Or 29 Days");
			break;
		case 3:
			printf("March 31 Days");
			break;
		case 4:
			printf("April 30 Days");
			break;
		case 5:
			printf("May 31 Days");
			break;
		case 6:
			printf("June 30 Days");
			break;
		case 7:
			printf("July 31 Days");
			break;
		case 8:
			printf("August 31 Days");
			break;
		case 9:
			printf("Septmber 30 Days");
			break;
		case 10:
			printf("October 31 Days");
			break;
		case 11:
			printf("November 30 Days");
			break;
		case 12:
			printf("December 31 Days");
			break;
		default:
			printf("Invalid Month Number");
	}
	getch();
}
/*
Atish Kumar Sahu
9937401932
kumarsahuatish280301@gmail.com
*/