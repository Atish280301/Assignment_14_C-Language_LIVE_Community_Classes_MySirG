/*Assignment - 14 C Language LIVE Community Classes MySirG*/
/*4. Write a function to print first N natural numbers (TSRN)*/

#include<stdio.h>
#include<conio.h>

int nat(int num)
{
	for(int i = 1; i <= num; i++)
	{
		printf("%d\n",i);
	}
}

int main()
{
	int number;
	
	printf("Enter Number :");
	scanf("%d",&number);
	
	nat(number);
	
	getch();
}
/*
Atish Kumar Sahu
9937401932
kumarsahuatish280301@gmail.com
*/