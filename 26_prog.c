

/*Q26 (Loops without Arrays/Strings)
Write a program to print numbers from 1 to n.*/


#include <stdio.h>


int main(){

int n;
int i=1;

printf("Enter value of n : ");
scanf("%d",&n);



for (i=1 ; i<=n ; i++)
{
printf("%d\n",i);
}


return 0;
}
