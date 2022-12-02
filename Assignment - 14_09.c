/*Assignment - 14 C Language LIVE Community Classes MySirG*/
/*9. Write a function to calculate LCM of two numbers. (TSRS)*/

#include<stdio.h>
#include<conio.h>

int LCM(int num1, int num2)
{
	int max = (num1 > num2) ? num1 : num2;
	
	while (1) {
        if ((max % num1 == 0) && (max % num2 == 0)) {
            
            return max;
            break;
        }
        ++max;
    }
}

int main()
{
	int NUM1, NUM2;
	
	printf("Enter Num1 : ");
	scanf("%d",&NUM1);
	
	printf("Enter Num2 : ");
	scanf("%d",&NUM2);
	
	int res = LCM(NUM1, NUM2);
	
	printf("LCM : %d",res);
	
	getch();
}
/*
Atish Kumar Sahu
9937401932
kumarsahuatish280301@gmail.com
*/