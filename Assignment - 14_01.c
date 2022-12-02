/*Assignment - 14 C Language LIVE Community Classes MySirG*/
/*1. Write a function to calculate the area of a circle. (TSRS)*/

#include<stdio.h>
#include<conio.h>
#define pi 3.14

int circle(int r)
{
	return pi * r * r;
}

int main()
{
	int radius;
	
	printf("Enter Radius : ");
	scanf("%d",&radius);
	
	float area = circle(radius);
	
	printf("Area : %f",area);
	
	getch();
}
/*
Atish Kumar Sahu
9937401932
kumarsahuatish280301@gmail.com
*/