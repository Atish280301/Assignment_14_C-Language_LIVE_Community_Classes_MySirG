/*Assignment - 14 C Language LIVE Community Classes MySirG*/
/*8. Write a function to calculate the number of arrangements one can make from n items
and r selected at a time. (TSRS)*/

#include<stdio.h>
#include<conio.h>

int NPR(int n, int r)
{
	int fact = 1, fact1 = 1;
	
	for(int i = 1; i<=n; i++)
	{
		fact = fact * i;
	}
	
	for(int j = 1; j<= (n-r); j++)
	{
		fact1 = fact1 * j;	
	}
	
	return fact/fact1;
}

int main()
{
	int N, R;
	
	printf("Enter N Value : ");
	scanf("%d",&N);
	
	printf("Enter R Value : ");
	scanf("%d",&R);
	
	int res = NPR(N,R);
	
	printf("%dP%d Value : %d",N,R,res);
	
	getch();
}
/*
Atish Kumar Sahu
9937401932
kumarsahuatish280301@gmail.com
*/