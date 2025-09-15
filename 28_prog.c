

/*Q28 (Loops without Arrays/Strings)
Write a program to print the product of even numbers from 1 to n.*/




#include <stdio.h>

int main() {

int i,n,product=1;

printf("Enter value of n : ");
scanf("%d",&n);

for (i=2;i<=n;i+=2)
{
product *=i;
}
printf("Product of even numbers b/w 0 to %d  : %d\n",n,product);
return 0;
}
