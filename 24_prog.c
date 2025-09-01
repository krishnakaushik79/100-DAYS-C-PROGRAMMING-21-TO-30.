

/*Q24 (Conditional Statements)
Write a program to calculate an electricity bill based on units consumed.*/


/*Upto 100 Units: Rs. 3.40/kWh
101-200 Units: Rs. 4.30/kWh
201-400 Units: Rs. 6.70/kWh
Above 400 Units: Rs. 7.35/kWh.*/

#include <stdio.h>

int main() {

float unit,bill;

printf("Enter Number Of Units Consumed : ");
scanf("%f",&unit);

if (unit<=100)
{
bill=3.40*unit;
printf("Electricity Bill on %.2f Units is ₹%.2f.\n",unit,bill);
}

else if (unit<=200)
{
bill=4.30*unit;
printf("Electricity Bill on %.2f Units is ₹%.2f.\n",unit,bill);
}

else if (unit<=400)
{
bill=6.70*unit;
printf("Electricity Bill on %.2f Units is ₹%.2f.\n",unit,bill);
}

else if (unit>400)
{
bill=7.35*unit;
printf("Electricity Bill on %.2f Units is ₹%.2f.\n",unit,bill);
}




return 0;
}
