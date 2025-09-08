

/*Q24 (Conditional Statements)
Write a program to calculate electricity bill based on units consumed with these rates:
First 100 units at ₹5/unit
Next 100 units at ₹7/unit
Next 100 units at ₹10/unit
Above at ₹12/unit*/



#include <stdio.h>

int main() {

float unit,bill1,bill2,bill3,bill4;

printf("Enter Number Of Units Consumed : ");
scanf("%f",&unit);

if (unit<=100)
{
bill1=5*unit;
printf("Electricity Bill on %.2f Units is ₹%.2f.\n",unit,bill1);
}

else if (unit>100 && unit<=200)
{
bill2= 5*100 + (7 * (unit-100) );
printf("Electricity Bill on %.2f Units is ₹%.2f.\n",unit,bill2);
}

else if (unit>200 && unit<=300)
{
bill3= 5*100 + 7*100 + (10 * (unit-200));
printf("Electricity Bill on %.2f Units is ₹%.2f.\n",unit,bill3);
}

else if (unit>300)
{
bill4= 5*100 + 7*100 + 10*100 + (12 * (unit-300));
printf("Electricity Bill on %.2f Units is ₹%.2f.\n",unit,bill4);
}




return 0;
}
