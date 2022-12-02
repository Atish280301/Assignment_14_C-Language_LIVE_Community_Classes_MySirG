/*Assignment - 14 C Language LIVE Community Classes MySirG*/
/*11. Write a function to check whether a given number is Prime or not. (TSRS)*/

#include<stdio.h>
#include<conio.h>

int prime(int n)
{
	int p = 1;
	
	char t = '1', f = '0';
	for(int i = 2; i < n; i++)
	{
		if(n % i == 0)
		{
			p = 0;
		}
	}
	if(p)
	{
		return t;
	}
	else
	{
		return f;
	}
}

int main()
{
	int num, res;
	
	printf("Enter Num Value : ");
	scanf("%d",&num);
	
	res = prime(num);
	
	printf("Result : %c",res);
	
	getch();
}
/*
Atish Kumar Sahu
9937401932
kumarsahuatish280301@gmail.com
*/