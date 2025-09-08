

/*Q22 (Conditional Statements)
Write a program to find profit or loss percentage given cost price and selling price.*/




#include <stdio.h>

int main() {

float cp,sp,profit,loss,pp,lp;

printf("Enter Cost Price : ");
scanf("%f",&cp);
printf("Enter Selling Price : ");
scanf("%f",&sp);

if (sp>cp)
{
	profit=sp-cp;
	pp=(profit/cp)*100;
	printf("Profit Percentage : %.2f%%\n",pp);
}

else if (sp<cp)
{
	loss=(cp-sp);
	lp=(loss/cp)*100;
	printf("Loss Percentage : %.2f%%\n",lp);
}

else 
{
	printf("No Profit, No Loss.\n");
}



return 0;
}
