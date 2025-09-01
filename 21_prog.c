

/*Q21 (Conditional Statements)
Write a program to display the month name and number of days using switch-case for a given month number.*/




#include <stdio.h>

int main() {

int num;

printf("Enter Month Number : ");
scanf("%d",&num);

if (num==1)
{
printf("January , 31 Days.\n");
}

else if (num==2)
{
printf("February , 28 Days.\n");
}

else if (num==3)
{
printf("March , 31 Days.\n");
}

else if (num==4)
{
printf("April , 30 Days.\n");
}

else if (num==5)
{
printf("May , 31 Days.\n");
}

else if (num==6)
{
printf("June , 30 Days.\n");
}

else if (num==7)
{
printf("July , 31 Days.\n");
}

else if (num==8)
{
printf("August , 31 Days.\n");
}

else if (num==9)
{
printf("September , 30 Days.\n");
}

else if (num==10)
{
printf("October , 31 Days.\n");
}

else if (num==11)
{
printf("November , 30 Days.\n");
}

else if (num==12)
{
printf("December , 31 Days.\n");
}

return 0;
}
