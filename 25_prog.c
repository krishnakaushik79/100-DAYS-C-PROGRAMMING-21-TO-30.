

/*Q25 (Conditional Statements)
Write a program to implement a basic calculator using switch-case for +, -, *, /, %.*/




#include <stdio.h>

int main() {

float num1,num2;
int choose;

printf("1. ADDITION.\n2. SUBTRACTION.\n3. MULTIPLY\n4. DIVIDE\n5. MODULUS.\n");

printf("Choose Above Option (1 to 5) : ");
scanf("%d",&choose);

printf("Enter Two Numbers : ");
scanf("%f%f",&num1,&num2);


switch (choose)
{
case 1:
{
printf("Addition : %.2f\n",num1+num2);
break;
}

case 2:
{
printf("Subtraction : %.2f\n",num1-num2);
break;
}

case 3:
{
printf("Multiply : %.2f\n",num1*num2);
break;
}

case 4:
{
printf("Divide : %.2f\n",num1/num2);
break;
}

case 5:
{
printf("Modulus : %d\n",(int)num1%(int)num2);
break;
}

default:
{
printf("INVAILD INPUT.\n");
break;
}
}
return 0;
}
