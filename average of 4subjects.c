#include<stdio.h>
int main()
{
	int telugu,english,hindi,social,sum;
	float average;
	printf("enter telugu marks:");
	scanf("%d",&telugu);
	printf("enter english marks:");
	scanf("%d",&english);
	printf("enter hindi marks:");
	scanf("%d",&hindi);
	printf("enter social marks:");
	scanf("%d",&social);
	sum=telugu+english+hindi+social;
	average=(sum)/4;
	printf("sum of subjects is %d\n",sum);
	printf("the average of 4 subjects is %f",average);
	return 0;
}
