#include<stdio.h>
int main()
{
	int calculator;
    float a,b;
	printf("Enter the value for number1 and number2:");
	scanf("%f%f",&a,&b);
	printf("Enter the value of \n press 1 for addition\n press 2 for subtraction \n press 3 for multiplication \n press 4 for divide \n press 5 for modulo\n press:");
	scanf("%d",&calculator);
	switch(calculator)
	   {
	   	case 1:
	   		printf("addition of two number %f",a+b);
	   		break;
	   	case 2:
	   		printf("subtraction of two number %f",a-b);
	   		break;
	   	case 3:
	   		printf("Multiplication of two number %f",a*b);
	   		break;
	   	case 4:
	   		printf("division of two number %f",a/b);
	   		break;
	   	
	   	default:
	   		printf("Invalid input");
	   		break;
	   }
}