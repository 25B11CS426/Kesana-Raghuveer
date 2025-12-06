#include<stdio.h>
int main()
{
	int a;
	float b;
	char ch;
	char str[50];
	printf("enter an integer :");
	scanf("%d",&a);
	printf("enter a float :");
	scanf("%f",&b);
	printf("enter character :");
	scanf(" %c",&ch);
	printf("enter a string :");
	scanf("%s",str);
	printf("You entered\n ");
	printf("integer %d\n",a);
	printf("float %f\n",b);
	printf("character %c\n",ch);
	printf("string %s\n",str);
	return 0;
}
