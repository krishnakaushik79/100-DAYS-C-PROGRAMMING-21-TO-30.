

/*Q29 (Loops without Arrays/Strings)
Write a program to calculate the factorial of a number.*/




#include <stdio.h>

int main() {

int i,n,factorial=1;

printf("Enter value of n : ");
scanf("%d",&n);

for (i=1;i<=n;i++)
{
factorial *=i;
}
printf("Factorial %d  : %d\n",n,factorial);




return 0;
}
