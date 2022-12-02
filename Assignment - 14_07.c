/*Assignment - 14 C Language LIVE Community Classes MySirG*/
/*7. Write a function to calculate the number of combinations one can make from n items
and r selected at a time. (TSRS)*/

#include<stdio.h>
#include<conio.h>

int NCR(int n, int r)
{
	int fact = 1, fact1 = 1, fact2 = 1;
	
	for(int i = 1; i <= n; i++)
	{
		fact = fact * i;
	}
	
	for(int j = 1; j<=r; j++)
	{
		fact1 = fact1 * j;
	}
	
	for(int k = 1; k <= (n-r); k++)
	{
		fact2 = fact2 * k;
	}
	
	return fact/(fact1 * fact2);
}

int main()
{
	int N, R;
	
	printf("Enter N Value : ");
	scanf("%d",&N);
	
	printf("Enter R Value : ");
	scanf("%d",&R);
	
	int res = NCR(N,R);
	
	printf("%dC%d Value : %d",N,R,res);
	
	getch();
}
/*
Atish Kumar Sahu
9937401932
kumarsahuatish280301@gmail.com
*/