

/*Q23 (Conditional Statements)
Write a program to calculate a library fine based on late days.*/


//fine is ₹5 per day.

#include <stdio.h>

int main() {

int num1,fine;

printf("Enter Number of late Days : ");
scanf("%d",&num1);

fine=num1*5;

printf("Fine for %d late days is ₹%d.\n",num1,fine);



return 0;
}
