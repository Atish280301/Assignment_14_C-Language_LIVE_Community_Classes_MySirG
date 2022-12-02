/*Assignment - 14 C Language LIVE Community Classes MySirG*/
/*6. Write a function to calculate the factorial of a number.(TSRS)*/

#include<stdio.h>
#include<conio.h>

int fact(int num)
{
	int fact = 1;
	
	for(int i = 1; i <= num; i++)
	{
		fact = i * fact;
	}
	
	return fact;
}
int main()
{
	int number, result;
	
	printf("Enter Value : ");
	scanf("%d",&number);
	
	result = fact(number);
	
	printf("Factorial : %d", result);
	
	getch();
}
/*
Atish Kumar Sahu
9937401932
kumarsahuatish280301@gmail.com
*/