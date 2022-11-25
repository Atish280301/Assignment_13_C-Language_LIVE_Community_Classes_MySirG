/*Assignment - 13 C Language LIVE Community Classes MySirG*/
/*4. Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an isosceles
triangle or not
b. Check whether a given set of three numbers are lengths of sides of a right
angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle or not
d. Exit*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int side1, side2, side3, option, result1, result2;
	
	printf("Enter Value Of Side1 : ");
	scanf("%d",&side1);
	
	printf("Enter Value Of Side2 : ");
	scanf("%d",&side2);
	
	printf("Enter Value Of Side3 : ");
	scanf("%d",&side3);
	
	printf("Enter Option : ");
	scanf("%d",&option);
	
	result1 = pow(side2,2)+ pow(side3,2);
	result2 = pow(side1,2);
	switch(option)
	{
		case 1:
			if(side2 == side3)
			{
				printf("Isosceles Triangle");
			}
			else
			{
				printf("Not An Isosceles Triangle");
			}
			break;
		case 2:
			if(result2 == result1)
			{
				printf("Rightangled Triangle");
			}
			else
			{
				printf("Not A Rightangled Triangle");
			}
			break;
		case 3:
			if(side1 == side2 == side3)
			{
				printf("Equilateral Triangle");
			}
			else
			{
				printf("Equilateral Triangle");
			}
			break;
		default:
			exit(0);		 
	}
	
	getch();
}
/*
Atish Kumar Sahu
9937401932
kumarsahuatish280301@gmail.com
*/