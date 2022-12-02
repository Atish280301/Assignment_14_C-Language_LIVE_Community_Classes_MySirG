/*Assignment - 14 C Language LIVE Community Classes MySirG*/
/*2. Write a function to calculate simple interest. (TSRS)*/

#include<stdio.h>
#include<conio.h>

int SI(int p, int r, int t)
{
	int total_interest = (p * r * t)/100;
	
	int total_amount = p + total_interest;
	
	printf("Total Interest : %d\n",total_interest);
	
	return  total_amount;
}

int main()
{
	int principal, interest, time;
	
	printf("Enter Principal : ");
	scanf("%d",&principal);
	
	printf("Enter Rate Of Interest : ");
	scanf("%d",&interest);
	
	printf("Enter Time In Year : ");
	scanf("%d",&time);
	
	int simple_interest = SI(principal, interest, time);
	
	printf("Total Amount : %d\n",simple_interest);
	
	getch();
}
/*
Atish Kumar Sahu
9937401932
kumarsahuatish280301@gmail.com
*/