/*Assignment - 14 C Language LIVE Community Classes MySirG*/
/*3. Write a function to check whether a given number is even or odd. Return 1 if the
number is even, otherwise return 0. (TSRS)*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int EVOD(int num)
{
	if(num % 2 == 0)
	{
		return 1;	
	}	
	else
	{
		return 0;	
	}	
}

int main()
{
	int number;
	
	printf("Enter Value Of Number : ");
	scanf("%d",&number);
	
	int result = EVOD(number);
	
	printf("%d",result);
	
	getch();
}
/*
Atish Kumar Sahu
9937401932
kumarsahuatish280301@gmail.com
*/