/*Assignment - 14 C Language LIVE Community Classes MySirG*/
/*5. Write a function to print first N odd natural numbers. (TSRN)*/

#include<stdio.h>
#include<conio.h>

int ODD(int num)
{
	for(int i = 0; i <= num; i++)
	{
		if(i % 2 !=0)
		{
			printf("%d\n",i);
	}	}	
}
int main()
{
	int number;
	
	printf("Enter Value : ");
	scanf("%d",&number);
	
	ODD(number);
	
	getch();
}
/*
Atish Kumar Sahu
9937401932
kumarsahuatish280301@gmail.com
*/