

/*Q23 (Conditional Statements)
Write a program to calculate library fine based on late days as follows:
First 5 days late: ₹2/day
Next 5 days late: ₹4/day
Next 20 days days late: ₹6/day
More than 30 days: Membership Cancelled.*/




#include <stdio.h>

int main() {

int num,fine1,fine2,fine3;

printf("Enter Number of late Days : ");
scanf("%d",&num);

if (num<=5)
{
fine1 = 2*num;
printf("Fine for %d late days is ₹%d.\n",num,fine1);
}
else if (num>5 && num<=10)
{
fine2 = 2*5 + (4* (num-5));
printf("Fine for %d late days is ₹%d.\n",num,fine2);
}
else if (num>10 && num<=30)
{
fine3 = 2*5 + 4*5 +(6 * (num-10));
printf("Fine for %d late days is ₹%d.\n",num,fine3);
}
else if (num>30)
{
printf("MEMBERSHIP CANCELLED.\n");
}






return 0;
}
