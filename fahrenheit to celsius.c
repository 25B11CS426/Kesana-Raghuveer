//fahrenheit to celsius
#include<stdio.h>
int main()
{
	float fahrenheit,celsius;
	printf("enter temperature in fahrenheit:");
	scanf("%f",&fahrenheit);
	celsius=(fahrenheit-32)/1.8;
	printf("temperature in celsius:%.2f",celsius);
	return 0;
}
