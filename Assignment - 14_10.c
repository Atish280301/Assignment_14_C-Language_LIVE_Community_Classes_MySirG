/*Assignment - 14 C Language LIVE Community Classes MySirG*/
/*10. Write a function to calculate HCF of two numbers. (TSRS)*/

#include<stdio.h>
#include<conio.h>

int HCF(int num1, int num2)
{
	int max;
	
	for(int i = 1; i <= num1 && i <= num2; i++)
	{
		if( num1%i == 0 && num2%i == 0 )
		{
			max = i;
		}
	}
	return max;
}

int main()
{
	int NUM1, NUM2;
	
	printf("Enter NUM1 : ");
	scanf("%d",&NUM1);
	
	printf("Enter Num2 : ");
	scanf("%d",&NUM2);
	
	int res = HCF(NUM1, NUM2);
	
	printf("HCF : %d",res);
	getch();
}
/*
Atish Kumar Sahu
9937401932
kumarsahuatish280301@gmail.com
*/